#include <iostream>
#include <fstream>
#include <sstream>
#include <exception>
#include <filesystem>

#include "scanner.hpp"
#include "parser.hpp"
#include "driver.hpp"

#include "ast_visitor.hpp"

// CLI
#include "CLI11.hpp"

class EctagsManager
{
private:
    const std::string ctags_header = 
    "!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;\" to lines/\n"
    "!_TAG_FILE_SORTED	0	/0=unsorted, 1=sorted, 2=foldcase/\n"
    "!_TAG_OUTPUT_FILESEP	slash	/slash or backslash/\n"
    "!_TAG_OUTPUT_MODE	u-ctags	/u-ctags or e-ctags/\n"
    "!_TAG_PATTERN_LENGTH_LIMIT	96	/0 for no limit/\n"
    "!_TAG_PROGRAM_AUTHOR	Dror Kabely //\n"
    "!_TAG_PROGRAM_NAME	Specman-e Ctags	\n"
    "!_TAG_PROGRAM_URL	https://github.com/k-sparrow/specman-e-parser	/official site/\n"
    "!_TAG_PROGRAM_VERSION	0.0.1	//\n"
    ;
    
public:
    EctagsManager(){}
    ~EctagsManager(){}

    auto main(int argc, char **argv) -> int {
        std::vector<std::string> raw_arguments(argv, argv + argc), arguments;
        arguments.reserve(raw_arguments.size());

        bool use_std_cout = false;
        unsigned int arg_idx = 0;
        // filter the arguments passes by any tool calling this program
        // narrow it down to the optional output dump file and the positional input
        // file (last argument)  
        std::copy_if(std::begin(raw_arguments), 
                     std::end(raw_arguments), 
                     std::back_inserter(arguments), 
                     [&](std::string const& arg) {
                        bool result = (arg_idx == raw_arguments.size() - 1 ||  // last argument  (input file [positional])
                                       arg == "-o"                         ||  // optional output file path 
                                       use_std_cout);                          // next argument after '-o'
                        arg_idx++; // update the loop index
                        use_std_cout = (arg == "-o"); // update for next iteration
                        // if argument is the program name
                        return result;
                     });
        arguments.shrink_to_fit();


        // initialize a command line
        CLI::App app{"ctags generator for Specman e language", "ectags"};

        std::string output_file_path;
        app.add_option("-o", output_file_path, "Output file for ctags dump");

        std::string input_source_path;
        app.add_option("i", input_source_path, "Input source file")
                        ->required(true)->check(CLI::ExistingFile);
        
        // parse the input arguments
        // using a parse overloaded call which does not 
        // comply with CLI11_PARSE macro (which uses (argc, argv) directly)
        // so using this construct instead
        try{
            app.parse(arguments);
        }
        catch(const CLI::ParseError& e){
            return app.exit(e);   
        }
        
        // get input and output streams
        std::ifstream yyin = std::ifstream(std::filesystem::absolute(input_source_path));
        if (yyin.fail())
            std::runtime_error("Cannot open file at path " + input_source_path + ". Please check why");
        
        std::ofstream ctags_output_stream(output_file_path, std::ios::out);
        std::ostream& ctags_out = output_file_path.empty() ? std::cout : ctags_output_stream;

        // initialize the node visitor
        ast::CtagsNodeVisitor ctags_node_visitor(ctags_out, &yyin);

        // Main driver (lexer & parser)
        yy::driver drv(input_source_path, &yyin);

        // parse the input
        auto i = drv.parse();
        // std::cout << drv.str()  << std::endl;

        // walk down the AST
        ctags_out << this->ctags_header;
        drv.get_root()->accept(ctags_node_visitor);

        return 0;
    }
};


int main(int argc, char **argv) {
    EctagsManager manager; // no need for argv[0] (name of the process)

    // parse & dump ctags
    return manager.main(argc, argv);
}