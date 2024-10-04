#include <stdio.h>
#include <string.h>

char attackString [] = "sophie\nsophie\n"; 
int main(){
	char *p = attackString;
	for(int i = 0; i <sizeof(attackString); i++){
		putchar(*p);
		p++;
		
	}
	return 0;
}
