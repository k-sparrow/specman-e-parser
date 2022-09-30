#include "utils.hpp"
#include <algorithm>

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

// trim from begin
auto ltrim(std::string& s) -> void {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch){ return !std::isspace(ch); }));
}

// trim from end
auto rtrim(std::string& s) -> void {
    s.erase(
        std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
            return !std::isspace(ch);
        }).base(), 
        s.end());
}

// trim both ends
auto trim(std::string& s) -> void {
    ltrim(s);
    rtrim(s);
}