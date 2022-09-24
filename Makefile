
LANG=specman
CC = g++
CFLAGS = -std=c++17 -ggdb3 -Wall -Wno-unused -Wno-write-strings -Wno-sign-compare
FSRC  = ${LANG}.flex
FCSRC = scanner.cpp
BSRC  = ${LANG}.y
ASTSRC = ${LANG}.aps
TSRC  = ${LANG}-tree.cpp
BCSRC = parser.cpp
GCSRC = ${FCSRC} ${BCSRC} ${TSRC}
CSRC = ${GCSRC} driver.cpp strtab.cpp tree.cpp utils.cpp 
CPSRC = ${CSRC} parser-main.cpp
CTSRC = ${CSRC} ectags-main.cpp ast_visitor_base.cpp ast_visitor.cpp
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
	@printf "Compiling parser...\n" 		   && ${CC} -DYYDEBUG=1 ${CFLAGS} ${CPSRC} -o $@

flex-main: ${FSRC}
	${CC} ${CFLAGS} parser.cpp driver.cpp scanner.cpp strtab.cpp main-flex.cpp -o $@

ectags: ${CTSRC}
	@printf "Compiling ectags...\n" 		   && ${CC} ${CFLAGS} $^ -o $@

test: 
	cat example.e | ./${OBJS}

memcheck: 
	cat example.e |  valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all ./${OBJS}

clean:
	rm -rf ${GCSRC} ${OBJS} 
	rm -rf parser.hpp *.hh

clean-flex-main:
	rm -rf flex-main