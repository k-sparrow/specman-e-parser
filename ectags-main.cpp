#include <iostream>
#include <fstream>
#include <sstream>
#include <exception>
#include <filesystem>

#include "scanner.hpp"
#include "parser.hpp"
#include "driver.hpp"

#include "ast_visitor.hpp"

class EctagsManager
{
private:
    std::string file_path;
    std::vector<std::string> arguments;

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
    EctagsManager(int argc, char **argv) : arguments(argv, argv + argc) {

    }
    ~EctagsManager(){
    }

    auto main() -> int {
        std::ifstream source_stream;
        // find if using an input file supplied by the user
        auto found_input_file_iter = std::find(std::begin(arguments), 
                                               std::end(arguments), 
                                               "-i");
        
        // if not, use std::cin
        bool use_cin = found_input_file_iter == std::end(arguments);
        if (!use_cin) {
        // if supplied, initialize a new input file stream buffer
            found_input_file_iter++;
            this->file_path = std::filesystem::absolute(*found_input_file_iter).string();
            source_stream = std::ifstream(this->file_path, std::ios_base::in);

            if (source_stream.fail())
                throw std::runtime_error("File not found: " + this->file_path + ", current path is: " + std::filesystem::current_path().string());
        }

        // find if using a custom tags file path, otherwise use std::cout
        auto found_output_file_iter = std::find(std::begin(arguments), 
                                                std::end(arguments), 
                                                "-o");
        
        bool use_cout = (found_output_file_iter == std::end(arguments));
        std::string output_dump_file_path = use_cout ? "" : *(++found_output_file_iter);
        std::ofstream ctags_file_dump_stream;
        if (!use_cout)
            ctags_file_dump_stream = std::ofstream(output_dump_file_path, std::ios::out);
        

        // set the reference out stream and source stream
        std::ostream& ctags_out = use_cout ? std::cout : ctags_file_dump_stream;
        std::istream& yyin      = use_cin  ? std::cin : source_stream;

        // initialize the node visitor
        ast::CtagsNodeVisitor ctags_node_visitor(ctags_out, &yyin);

        // Main driver (lexer & parser)
        yy::driver drv(file_path, &yyin);

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
    EctagsManager manager(argc - 1, argv + 1); // no need for argv[0] (name of the process)

    // parse & dump ctags
    return manager.main();
}