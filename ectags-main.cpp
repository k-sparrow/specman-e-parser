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
    std::ofstream ctags_dump_stream;
    std::ifstream input_file_stream;
    ast::CtagsNodeVisitor ctags_node_visitor;

    std::vector<std::string> arguments;
public:
    EctagsManager(int argc, char **argv) : ctags_node_visitor(ctags_dump_stream), arguments(argv, argv + argc) {

    }
    ~EctagsManager(){
        ctags_dump_stream.close();
        input_file_stream.close();
    }

    auto main() -> int {
        std::istream* yyin;

        // find if using an input file supplied by the user
        auto found_input_file_iter = std::find(std::begin(arguments), 
                                               std::end(arguments), 
                                               "-i");
        
        // if not, use std::cin
        if (found_input_file_iter == std::end(arguments))
            yyin = &std::cin;
        
        // if supplied, initialize a new input file stream buffer
        else {
            found_input_file_iter++;
            this->file_path = std::filesystem::absolute(*found_input_file_iter).string();
            input_file_stream = std::ifstream(this->file_path, std::ios_base::in);

            if (input_file_stream.fail())
                throw std::runtime_error("File not found: " + this->file_path + ", current path is: " + std::filesystem::current_path().string());
            
            yyin = &input_file_stream;
        }

        // find if using a custom tags file path
        auto found_output_file_iter = std::find(std::begin(arguments), 
                                                std::end(arguments), 
                                                "-o");
        // if not, use default "tags" file path as output
        std::string output_dump_file_path = 
            (found_output_file_iter == std::end(arguments)) ? "tags" : *(++found_output_file_iter);
        
        // Main 
        yy::driver drv(file_path, yyin);

        // initialize the output file
        ctags_dump_stream = std::ofstream(output_dump_file_path, std::ios_base::out);

        // parse the input
        auto i = drv.parse();
        std::cout << drv.str()  << std::endl;

        // walk down the AST
        drv.get_root()->accept(ctags_node_visitor);

        return 0;
    }
};


int main(int argc, char **argv) {
    EctagsManager manager(argc - 1, argv + 1); // no need for argv[0] (name of the process)

    // parse & dump ctags
    return manager.main();
}