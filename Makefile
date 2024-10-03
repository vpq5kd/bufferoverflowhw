all: gen_formatstring

gen_formatstring: gen_formatstring.o
	clang -g gen_formatstring.o -o gen_formatstring
gen_formatstring.o: gen_formatstring.c
	clang -g -c gen_formatstring.c -o gen_formatstring.o
clean:
	rm -f gen_formatstring.o gen_formatstring
.PHONY: all clean
