#!/usr/local/bin/python3.8
from os import getcwd

from apsastgen import APSAstGen
from argparse import ArgumentParser

parser = ArgumentParser(description="APS generator")
parser.add_argument("-l", "--lang", type=str, help="Language name, which the generate classes belong to")
parser.add_argument("--lang-file", type=str, help="APS language specification file")
parser.add_argument("-o", "--out-dir", type=str, default=getcwd(), help="Output directory for source files")

if __name__ == "__main__":
    args = parser.parse_args()

    ast_gen: APSAstGen = APSAstGen(lang_name=args.lang)

    ast_gen.gen(lang_spec=args.lang_file,
                out_dir=args.out_dir)

