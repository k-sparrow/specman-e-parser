#include "utils.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>

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

auto get_line_by_number(std::istream& stream, int line_no) -> std::string {
    std::string result = "";
    // save the current position for later, so we can't restore the original state
    // of the stream
    auto cur_pos = stream.tellg();

    stream.seekg(0);

    // line number start at 0, so we read at least one line if line_no == 0
    do std::getline(stream, result);
    while ((line_no--) > 0);
    
    // reset the state of the stream to the original position
    stream.seekg(cur_pos);

    return result;
}