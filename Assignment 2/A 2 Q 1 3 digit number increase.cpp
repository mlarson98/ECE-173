/*Q.1 If a three-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits. 
For example if the number that is input is 391 then the output should be displayed as 402. Note that just adding 111 will not work. */
#include <stdio.h>
int main (void)
{
	int N, digit_0, digit_1, digit_2, digit_3;
	printf("Enter a three digit integer:  ");
	scanf("%d", &N);
	
	digit_3 = N%10;
	N = N/10;
	digit_2 = N%10;
	N = N/10;
	digit_1 = N%10;
	
	digit_3 = digit_3 + 1;
	digit_2 = digit_2 + 1;
	digit_1 = digit_1 + 1;
	
	int New = digit_1*100 + digit_2*10 + digit_3;
	
	printf ("Here is the output: %d", New);
	return 0;	
}
