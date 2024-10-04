all: gen_formatstring

gen_formatstring: gen_formatstring.o
	clang -g gen_formatstring.o -o gen_formatstring
gen_formatstring.o: format_string_attack.c
	clang -g -c format_string_attack.c -o gen_formatstring.o
clean:
	rm -f gen_formatstring.o gen_formatstring
.PHONY: all clean
