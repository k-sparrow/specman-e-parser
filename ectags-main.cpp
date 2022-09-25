#include <iostream>
#include <sstream>

#include "scanner.hpp"
#include "parser.hpp"
#include "driver.hpp"

#include "ast_visitor.hpp"

int main(int argc, char **arg) {
    yy::driver drv;

    // parse the input
    auto i = drv.parse();
    std::cout << drv.str()  << std::endl;

    std::ostringstream sout;
    ast::CtagsNodeVisitor visitor(sout);
    
    // walk down the AST
    drv.get_root()->accept(visitor);

    std::cout << "Ctags dump:" << std::endl;
    std::cout << sout.str() << std::endl;

    return 0;
}