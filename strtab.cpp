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
        return *lhs == *rhs;
    }

    auto operator == (Symbol_ const& lhs, Symbol_ const& rhs) -> bool {
        
        return lhs.lock() == rhs.lock();
    }

    auto operator << (std::ostream& out, Symbol const& rhs) -> std::ostream& {
        return out << "Symbol: " << rhs->Str() << ", " << " Length: " << rhs->Length();
    }
}