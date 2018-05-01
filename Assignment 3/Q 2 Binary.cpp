/*Q.2 Write a program which will take a decimal number from the console and output the equivalent 
binary string. For example the binary string corresponding to 23 is “10111”. Note that the least 
significant bit appears at the right end when you are facing the computer. Just like in decimal numbers. 
Another example: 011= (0)2^2 + (1) 2^1 + (1) 2^0 =3. */
#include <stdio.h>
int main (void)
{
	int n;
	int remainder, binary, i;
	printf("enter a decimal number:  ");
	scanf("%d", &n);
	
	while(n>0)
	{
		remainder = n%2;
		n = n/2;
		binary = remainder*i + binary;
		i = i*10;
	}
	printf("\n\nHere is the binary string:  %d", binary);
	return 0;
}
