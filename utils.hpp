#pragma once

#include "strtab.hpp"
#include "specman-tree-handcode.hpp"

using namespace elex;

#ifndef STRINGIFY
#define STRINGIFY(x) (#x)
#endif // STRINGIFY

#ifndef MAPIFY
#define MAPIFY(x)      { (STRINGIFY(x)), (x) }
#define THIS_MAPIFY(x) { (STRINGIFY(x)), (this->x) }
#endif // MAPIFY

auto pad(int n) -> char*;


auto dump_Symbol_(std::ostream& stream, int n, elex::Symbol_ sym) -> void;
auto dump_Boolean(std::ostream& stream, int n, elex::Boolean sym) -> void;

auto trim(std::string&) -> void;

auto get_line_by_number(std::istream&, int) -> std::string;