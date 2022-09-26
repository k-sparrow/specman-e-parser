#include "driver.hpp"

#include <sstream>

using namespace yy;

// initialization of static member current location
yy::location driver::cur_location = yy::location();

driver::driver(std::string const& file_path, std::istream* yyin) :
    m_scanner(*this, yyin, &file_path),
    m_parser(m_scanner, *this)
{
    this->idtable["NO SYMBOL"] = Symbol(new Entry("NO SYMBOL", 0));
}

int driver::parse(unsigned int debug_level) {
    m_parser.set_debug_level(debug_level);
    return m_parser.parse();
}

void driver::clear() {
}

std::string driver::str() const {
    std::stringstream s;
    if(ast_root)
        ast_root->dump(s, 0);
    return s.str();
}

void driver::switchInputStream(std::istream *is) {
    m_scanner.switch_streams(is, NULL);
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