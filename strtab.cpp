#include "strtab.hpp"


namespace elex {
    Entry::Entry(std::string const& yytext, int length) : m_str(yytext), m_length(length) {

    }

    auto Entry::Str() const -> std::string {
        return this->m_str;
    }

    auto Entry::Length() const -> int {
        return this->m_length;
    }

    auto operator == (Entry const& lhs, Entry const& rhs) -> bool {
        return lhs.Str() == rhs.Str();
    }

    auto operator == (Symbol const& lhs, Symbol const& rhs) -> bool {
        // if only one of the pointers is nullptr, return false
        if((lhs == nullptr) ^ (rhs == nullptr)) return false;

        // otherwise, compare the pointers or their strings (see above)
        return lhs == rhs || *lhs == *rhs;
    }

    auto operator == (Symbol_ const& lhs, Symbol_ const& rhs) -> bool {
        return lhs.lock() == rhs.lock();
    }

    auto operator << (std::ostream& out, Symbol const& rhs) -> std::ostream& {
        if(!rhs) return out << "empty" << std::endl;
        return out << rhs->Str();
    }

    auto operator << (std::ostream& out, Symbol_ const& rhs) -> std::ostream& {
        return out << rhs.lock();
    }

    auto operator + (Symbol const& lhs, std::string const& rhs) -> Symbol {
        auto new_symbol = (!lhs) ? rhs : lhs->Str() + rhs;
        return std::move(Symbol(new Entry(new_symbol, new_symbol.size())));
    }

    auto operator + (Symbol_ const& lhs, std::string const& rhs) -> Symbol {
        auto new_symbol = (!lhs.lock()) ? rhs : lhs.lock()->Str() + rhs;
        return std::move(Symbol(new Entry(new_symbol, new_symbol.size())));
    }
}