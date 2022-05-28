
LANG=specman
CC = g++-9
CFLAGS = -std=c++17 -g -Wall -Wno-unused -Wno-write-strings -Wno-sign-compare
FSRC  = ${LANG}.flex
FCSRC = scanner.cpp
BSRC  = ${LANG}.y
BCSRC = parser.cpp
GCSRC = ${FCSRC} ${BCSRC} 
CSRC = ${GCSRC} driver.cpp main.cpp
FLEX = flex
BISON = bison
OBJS = parser

${FLEX}: ${FSRC}
	${FLEX} -o ${FCSRC} $<

${BISON}: ${BSRC}
	${BISON} -o ${BCSRC} $<

${OBJS}: 
	${CC} ${CFLAGS} ${CSRC} -o $@


clean:
	rm -rf ${GCSRC} ${OBJS} 
	rm -rf parser.hpp *.hh 