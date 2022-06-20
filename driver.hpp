#ifndef DRIVER_H
#define DRIVER_H

#include <vector>

#include "specman-tree.hpp"
#include "scanner.hpp"

// autogenerated by Bison, don't panic
// if your IDE can't resolve it - call make first
#include "parser.hpp"

#include "strtab.hpp"

namespace yy {

    /**
     * This class is the interface for our scanner/lexer. The end user
     * is expected to use this. It drives scanner/lexer, keeps
     * parsed AST and generally is a good place to store additional
     * context data. Both parser and lexer have access to it via internal 
     * references.
     * 
     * I know that the AST is a bit too strong word for a simple
     * vector with nodes, but this is only an example. Get off me.
     */
    class driver
    {
    public:
        driver();
        
        /**
         * Run parser. Results are stored inside.
         * \returns 0 on success, 1 on failure
         */
        int parse();
        
        /**
         * Clear AST
         */
        void clear();
        
        /**
         * Print AST
         */
        std::string str() const;
        
        /**
         * Switch scanner input stream. Default is standard input (std::cin).
         * It will also reset AST.
         */
        void switchInputStream(std::istream *is);
        
        /**
         * dump table symbols
         * 
         */
        auto dump_symbols() const -> void;

        /**
         * assign the root of an ast
         * 
         */
        auto set_root(elex::Module) -> void;

        /**
         * This is needed so that Scanner and Parser can call some
         * methods that we want to keep hidden from the end user.
         */
        friend class parser;
        friend class scanner;
        
        yy::scanner& getScanner() { return m_scanner; }
    private:
        
        // Used internally by Scanner YY_USER_ACTION to update location indicator
        void increaseLocation(unsigned int loc);
        
        // Used to get last Scanner location. Used in error messages.
        unsigned int location() const;
        
    private:
        scanner m_scanner;
        parser m_parser;
        unsigned int m_location;          // Used by scanner

        // symbol table for strings, ids & integers
        // will be accessed directly by the scanner
        // flex rules to add symbols
        elex::SymTable strtable;
        elex::SymTable inttable;
        elex::SymTable idtable;

        // parser results
        elex::Module ast_root;
    };

}

#endif // DRIVER_H
