
#include <iostream>
#include "scanner.hpp"
#include "parser.hpp"
#include "driver.hpp"

int main(int argc, char **arg) {
    yy::driver drv;

    // parse the input
    auto i = drv.parse();

    // dump the ast
    cout << drv.str() << endl;

    return 0;
}