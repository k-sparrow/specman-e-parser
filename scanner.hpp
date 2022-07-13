#ifndef SCANNER_H
#define SCANNER_H


/**
 * Generated Flex class name is yyFlexLexer by default. If we want to use more flex-generated
 * classes we should name them differently. See scanner.l prefix option.
 * 
 * Unfortunately the implementation relies on this trick with redefining class name
 * with a preprocessor macro. See GNU Flex manual, "Generating C++ Scanners" section
 */
#if ! defined(yyFlexLexerOnce)
#undef yyFlexLexer
#include <FlexLexer.h>
#endif

// Scanner method signature is defined by this macro. Original yylex() returns int.
// Sinice Bison 3 uses symbol_type, we must change returned type. We also rename it
// to something sane, since you cannot overload return type.
#undef YY_DECL
#define YY_DECL yy::parser::symbol_type yy::scanner::get_next_token()

#include "parser.hpp" // this is needed for symbol_type

namespace yy {

    // Forward declare interpreter to avoid include. Header is added inimplementation file.
    class driver; 
        
    class scanner : public yyFlexLexer {
    public:
        scanner(driver &driver) : m_driver(driver), m_location() {}
        virtual ~scanner() {}
        virtual yy::parser::symbol_type get_next_token();

    private:
        // Used internally by Scanner YY_USER_ACTION to update location indicator
        // note
        auto updateLocation() -> void {
            // save current location for restoration if updateLocation is used by YY_USER_ACTION
            // and user wants to recover from yyless or yyabort
            m_prev_location = m_location;

            // get the previous line number 
            int prev_yylineno = m_location.end.line;

            // update begin position to current end position
            m_location.step();
            
            // update the end position
            //if we didn't switch lines, just add the length to the column value
            if(yylineno == prev_yylineno) m_location.columns(YYLeng());
            // else, we need to update the end position with the remainder of the number
            // of characters after the newline char, and update the line number
            else {
                int column;
                for(column = 1; yytext[yyleng - column] != '\n'; ++column){}

                // update the line of the end position, and set its column value to 1
                m_location.lines(yylineno - prev_yylineno);

                // update the column of the end point
                m_location.columns(column);
            }
        }

        // Used to get last Scanner location. Used in error messages.
        yy::location Location() const {
            return m_location;
        }

    private:
        driver &m_driver;

        yy::location m_location, m_prev_location;
    };

}

#endif