#pragma once

#include <string>
#include <map>
#include <memory>
#include <iostream>

namespace elex {
    class Entry;
    typedef std::shared_ptr<Entry> Symbol; // main representation in symbol table
    typedef std::weak_ptr<Entry> Symbol_; // internal usage by bison

    class Entry {
    protected:
        std::string m_str;
        int m_length;

    public:
        Entry() = delete;
        explicit Entry(std::string const&, int);

    public:
        auto Length() const -> int;
        auto Str() const -> std::string;
    };

    // comparison operator between entries
    auto operator == (Entry const&, Entry const&) -> bool;
    auto operator == (Symbol const&, Symbol const&) -> bool;
    auto operator == (Symbol_ const&, Symbol_ const&) -> bool;
    auto operator +  (Symbol const&, std::string const&)  -> Symbol;
    auto operator +  (Symbol_ const&, std::string const&) -> Symbol;
    auto operator << (std::ostream& out, Symbol const& rhs) -> std::ostream& ;

    typedef std::map<std::string, Symbol> SymTable;
}