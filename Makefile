
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
BISON_BIN_DIR := $(shell bison --print-datadir)
XSLT = xsltproc
APS = ~/PycharmProjects/apsgen/apsgen.py
OBJS = parser

ast: ${ASTSRC}
	${APS} --lang ${LANG} --lang-file ${ASTSRC} --out-dir .

${FLEX}: ${FSRC}
	${FLEX} -o ${FCSRC} $<

${BISON}: ${BSRC}
	${BISON} -o ${BCSRC} $< --xml=${LANG}.xml
	${XSLT} ${BISON_BIN_DIR}/xslt/xml2xhtml.xsl ${LANG}.xml > ${LANG}.html


${OBJS}: 
	@printf "Generting scanner source...\n"    && ${FLEX} -o ${FCSRC} ${FSRC}
	@printf "Generting parser source...\n" 	   && ${BISON} -o ${BCSRC} ${BSRC} --xml=${LANG}.xml
	@printf "Generting parser debug info...\n" && ${XSLT} ${BISON_BIN_DIR}/xslt/xml2xhtml.xsl ${LANG}.xml > ${LANG}.html
	@printf "Compiling parser...\n" 		   && ${CC} ${CFLAGS} ${CSRC} -o $@

flex-main: ${FSRC}
	${CC} ${CFLAGS} parser.cpp driver.cpp scanner.cpp strtab.cpp main-flex.cpp -o $@

test: 
	cat example.e | ./${OBJS}

memcheck: 
	cat example.e |  valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all ./${OBJS}
clean:
	rm -rf ${GCSRC} ${OBJS} 
	rm -rf parser.hpp *.hh

clean-flex-main:
	rm -rf flex-main