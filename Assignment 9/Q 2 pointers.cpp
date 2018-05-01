/*Q.2 Write a program that defines and initializes three pointers: first one to point to an integer, 
the second to point to a floating point number and the third one must point to a charcter type variable. 
Display on the screen the addresses stored in those pointers each one in three different forms: octal, 
decimal and hexadecimal formats. (Note that in order to initialize these pointers you will have to define 
an integer, a floating point variable and a character variable too.) */
#include<stdio.h>
int main(void)
{
	int i=0;
	char d;
	float f=1.5;
	char c=d;
	int *integer;
	float *decimal;
	char *character;
	integer=&i;
	decimal=&f;
	character=&c;
	printf("octal_form:  decimal_form:  hexadecimal_form:\n");
	printf("i:%o 	%d 	%x\n",integer,integer,integer);
	printf("f:%o 	%d 	%x\n",decimal,decimal,decimal);
	printf("c:%o 	%d 	%x\n",character,character,character);
	return 0;
}
