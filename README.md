#
# eParse
## Specman-e Parser

Specman-e is an awesome programming language , and in my honest opinion, a far superior option for the hardware functional verification task then the mainstream choice (yes, [SV](https://ieeexplore.ieee.org/document/8299595), I'm looking at you).

The need for a Specman-e parser was born out of a complete lack of open-source language support and development tools (auto completion, snippet generation, quick code browsing etc.) beyond syntax highlighting.
Out of that need, the eParse project was born.

The eParse project's main target is to parse Specman-e ([IEEE 1647-2011](https://ieeexplore.ieee.org/document/6006495)) as an engine for future developer tools, mainly an LSP (Language Server Protocol) implementation for the language.

eParse is merely a language parser, and **in no way** a replacement for enterprise level compiler and simulation tools.


## Features
- Flex + Bison based scanner and LR parser
- Fault tolerant parser 
- Auto generated AST node classes


## Requirements

- Bison ( >= 3.0.4 )
- Flex ( >= 2.6.0 )
- C++17 ( g++ >= 9.4.0 ) 
 
## Build
The build chain is as follows.

### Class Nodes Generation: Python

- An APS phylum specification file (`.aps`) is parsed using *pyparsing*
- C++ AST node classes' code is generated using *jinja2*

### Parser Generation: Bison
- A language specificaton file (`.y`) file is passed to Bison
- A C++ parser source code is generated

### Lexer Generation: Flex
- A language tokenization file (`.l`) file is passed to Flex
- A C++ scanner source code is generated

### Compilation: `make`
- **All** generated C++ source (AST classes, parser, scanner) are jointly compiled to create the parser program.

## Build
Simply:

`make parser`

## Licence
MIT

## Roadmap
Most of the current language core constructs have been implemented:
- [x] Statements
    - [x] import
    - [x] package
    - [x] struct (like)
    - [x] unit (like)
    - [x] sequence
    - [x] extend struct-or-unit
    - [x] type definitions
    - [x] extend type
    - [x] define as (shallow)
    - [x] define as computed (shallow)

- [x] Struct Members
    - [x] field declaration
    - [x] method declaration
    - [x] TCM declaration
    - [x] WHEN subtyping
    - [x] event declaration
    - [x] coverage group declaration & extension
    - [x] event triggered code (on-event)
    - [x] constraint definition
    - [x] expect (formal) definition
        - [x] temporal expressions

- [x] Actions
    - [x] variable creation
    - [x] variable modification
    - [x] iterative control actions (for | for-from-to | for-each | for-each-file | while | repeat)
    - [x] conditional control flow actions (if-then-else | case)
    - [x] time consuming actions (sync | wait)
    - [x] method dispatch 
    - [x] on-the-fly generation 
    - [x] sequence dispatch (`do` actions)
    - [x] error handling 
    - [x] state machine

- [x] Expression
    - [x] operators
        - [x] boolean 
        - [x] bitwise
        - [x] arithmetic
        - [x] list slicing
        - [x] bit slicing
        - [x] list indexing
        - [x] hierarchy reference
        - [x] list concatenation
        - [x] bit concatenation
        - [x] type introspection
    
    - [x] non-operators
        - [x] new
- [ ] Verilog-like macro pre-processor
- [ ] Complex macro (`define as|define as computed`) macro pre-processor
- [ ] Different dumping contexts
    - [ ] ctags
    - [ ] json


