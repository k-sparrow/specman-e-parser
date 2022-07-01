
LANG=specman
CC = g++-9
CFLAGS = -std=c++17 -ggdb3 -Wall -Wno-unused -Wno-write-strings -Wno-sign-compare
FSRC  = ${LANG}.flex
FCSRC = scanner.cpp
BSRC  = ${LANG}.y
ASTSRC = ${LANG}.aps
TSRC  = ${LANG}-tree.cpp
BCSRC = parser.cpp
GCSRC = ${FCSRC} ${BCSRC} ${TSRC}
CSRC = ${GCSRC} driver.cpp main.cpp strtab.cpp tree.cpp utils.cpp
FLEX = flex
BISON = bison
APS = ~/PycharmProjects/apsgen/apsgen.py
OBJS = parser

ast: ${ASTSRC}
	${APS} --lang ${LANG} --lang-file ${ASTSRC} --out-dir .

${FLEX}: ${FSRC}
	${FLEX} -o ${FCSRC} $<

${BISON}: ${BSRC}
	${BISON} -o ${BCSRC} $<

${OBJS}: 
	${FLEX} -o ${FCSRC} ${FSRC}
	${BISON} -o ${BCSRC} ${BSRC}
	${CC} ${CFLAGS} ${CSRC} -o $@

flex-main: ${FSRC}
	${CC} ${CFLAGS} parser.cpp driver.cpp scanner.cpp strtab.cpp main-flex.cpp -o $@

clean:
	rm -rf ${GCSRC} ${OBJS} 
	rm -rf parser.hpp *.hh

clean-flex-main:
	rm -rf flex-main