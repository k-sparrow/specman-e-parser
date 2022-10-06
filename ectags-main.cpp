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
        // initialize a command line
        CLI::App app{"ctags generator for Specman e language", "ectags"};

        std::string output_file_path;
        app.add_option("-o", output_file_path, "Output file for ctags dump");

        std::string input_source_path;
        app.add_option("i", input_source_path, "Input source file")
                        ->required(true)->check(CLI::ExistingFile);
        
        // parser the input arguments
        CLI11_PARSE(app, argc, argv);

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