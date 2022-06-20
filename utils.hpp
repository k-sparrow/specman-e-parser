#pragma once

#include "strtab.hpp"

using namespace elex;

auto pad(int n) -> char*;


auto dump_Symbol_(std::ostream& stream, int n, elex::Symbol_ sym) -> void;