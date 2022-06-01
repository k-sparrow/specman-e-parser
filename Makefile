
LANG=specman
CC = g++-9
CFLAGS = -std=c++17 -g -Wall -Wno-unused -Wno-write-strings -Wno-sign-compare
FSRC  = ${LANG}.flex
FCSRC = scanner.cpp
BSRC  = ${LANG}.y
BCSRC = parser.cpp
GCSRC = ${FCSRC} ${BCSRC} 
CSRC = ${GCSRC} driver.cpp main.cpp strtab.cpp
FLEX = flex
BISON = bison
OBJS = parser

${FLEX}: ${FSRC}
	${FLEX} -o ${FCSRC} $<

flex-main: ${FSRC}
	${CC} ${CFLAGS} parser.cpp driver.cpp scanner.cpp strtab.cpp main-flex.cpp -o $@

${BISON}: ${BSRC}
	${BISON} -o ${BCSRC} $<

${OBJS}: 
	${CC} ${CFLAGS} ${CSRC} -o $@


clean:
	rm -rf ${GCSRC} ${OBJS} 
	rm -rf parser.hpp *.hh

clean-flex-main:
	rm flex-main