#pragma once

#include "strtab.hpp"
#include "specman-tree-handcode.hpp"

using namespace elex;

auto pad(int n) -> char*;


auto dump_Symbol_(std::ostream& stream, int n, elex::Symbol_ sym) -> void;
auto dump_Boolean(std::ostream& stream, int n, elex::Boolean sym) -> void;