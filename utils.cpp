#include "utils.hpp"

static char *padding = "                                                                                ";      // 80 spaces for padding

char *pad(int n) {
    if (n > 80) return padding;
    if (n <= 0)  return "";
    return padding+(80-n);
}


auto dump_Symbol_(std::ostream& stream, int n, elex::Symbol_ sym) -> void {
    stream << pad(n) << sym.lock() << std::endl;
}

auto dump_Boolean(std::ostream& stream, int n, elex::Boolean sym) -> void {
    stream << pad(n) << std::boolalpha << sym << std::endl;
}