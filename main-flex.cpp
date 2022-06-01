#include <FlexLexer.h>
#include "scanner.hpp"
#include "parser.hpp"
#include "driver.hpp"

int main (int argc, char** argv) {
    yy::driver driver;
    yy::scanner& scanner = driver.getScanner();
    int type = 0;
    do
    {
        auto tok =  scanner.get_next_token();
        std::cout << tok.type << std::endl;
        type = tok.type;
    } while (type > 0);
    
    driver.dump_symbols();
    
    return 0;
}