
#include <iostream>
#include <fstream>
#include <algorithm>
#include <filesystem>
#include "scanner.hpp"
#include "parser.hpp"
#include "driver.hpp"

int main(int argc, char **argv) {
    argc--; argv++;
    std::vector<std::string> arguments(argv, argv + argc);

    // find if using an input file supplied by the user
    auto found_input_file_iter = std::find(std::begin(arguments), 
                                           std::end(arguments), 
                                           "-i");
    if (found_input_file_iter == std::end(arguments))
    {
        std::cerr << "Couldn't find file argument!" << std::endl;
        return 1;
    }
    
    found_input_file_iter++;
    std::string file_path = std::filesystem::absolute(*found_input_file_iter);
    std::ifstream file_stream(file_path);

    if(file_stream.fail()) 
        std::cerr << "File not found: " << file_path << ", current path is: " << std::filesystem::current_path().string() << std::endl;


    yy::driver drv(file_path, &file_stream);

    // parse the input
    auto i = drv.parse();

    // dump the ast
    cout << drv.str() << endl;

    return 0;
}