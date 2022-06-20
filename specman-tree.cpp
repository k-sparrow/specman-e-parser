/* 
    Language implementation file for classes used by bison

    *** This file is generated AUTOMATICALLY by APSGEN ***
    ***               DO NOT MODIFY                    ***

 */

#include "tree.hpp"
#include "specman-tree.hpp"
#include "utils.hpp"

namespace elex { 
    

auto module__class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "module_" << std::endl;
    stmt->dump(stream, n+2);
}

auto module_(Statement stmt) -> Module {
    return new module__class(stmt);
}

auto unit_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "unit" << std::endl;
    dump_Symbol_(stream, n+2, unit_name);
}

auto unit(Symbol_ unit_name) -> Statement {
    return new unit_class(unit_name);
}

auto struct__class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "struct_" << std::endl;
    dump_Symbol_(stream, n+2, struct_name);
}

auto struct_(Symbol_ struct_name) -> Statement {
    return new struct__class(struct_name);
}

auto extend_like_class::dump(std::ostream& stream, int n) -> void {
    stream << pad(n) << "extend_like" << std::endl;
    dump_Symbol_(stream, n+2, uos_name);
    dump_Symbol_(stream, n+2, base_uos_name);
}

auto extend_like(Symbol_ uos_name, Symbol_ base_uos_name) -> Statement {
    return new extend_like_class(uos_name, base_uos_name);
} 
}