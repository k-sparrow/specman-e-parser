#include "driver.hpp"

#include <sstream>

using namespace yy;

driver::driver() :
    m_scanner(*this),
    m_parser(m_scanner, *this),
    m_location(0)
{

}

int driver::parse() {
    m_location = 0;
    return m_parser.parse();
}

void driver::clear() {
    m_location = 0;
}

std::string driver::str() const {
    std::stringstream s;
    ast_root->dump(s, 0);
    return s.str();
}

void driver::switchInputStream(std::istream *is) {
    m_scanner.switch_streams(is, NULL);
}

void driver::increaseLocation(unsigned int loc) {
    m_location += loc;
    cout << "increaseLocation(): " << loc << ", total = " << m_location << endl;
}

unsigned int driver::location() const {
    return m_location;
}

auto driver::set_root(elex::Module root) -> void {
    ast_root = root;
}

auto driver::dump_symbols() const -> void {
    std::cout << "--------- String Literals ---------" << std::endl;
    for (const auto& [_, symbol] : strtable){
        std::cout << symbol << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--------- Identifiers ---------" << std::endl;
    for (const auto& [_, symbol] : idtable){
        std::cout << symbol << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--------- Number Literals ---------" << std::endl;
    for (const auto& [_, symbol] : inttable){
        std::cout << symbol << std::endl;
    }
    std::cout << std::endl;
}