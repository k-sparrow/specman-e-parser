
#include <iostream>
#include "scanner.hpp"
#include "parser.hpp"
#include "driver.hpp"

int main(int argc, char **arg) {
    yy::driver drv;
    auto i = drv.parse();
    cout << "Main" << endl;
}