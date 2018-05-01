/*Q.2 Write a program to implement the following secret message transmission scheme: store a 
message to be transmitted secretly in an array and convert it into a secret message by replacing 
each letter be a letter which is 10 positions ahead in the alphabet, i.e., ‘c’ is replaced by ‘m’. 
Display it on the screen. Then convert it back to original message and display on the screen. */
#include <stdio.h>
int main(void)
{
	char H, E, L, R, O, V, Y;
	char MESSAGE[5]={'H','E','L','L','O'};
	MESSAGE[0]='R';
	MESSAGE[1]='O';
	MESSAGE[2]='V';
	MESSAGE[3]='V';
	MESSAGE[4]='Y';
	
	printf("Here is the encrypted message:  %c%c%c%c%c\n\n", MESSAGE[0],MESSAGE[1],MESSAGE[2],MESSAGE[3],MESSAGE[4]);
	
	MESSAGE[0]='H';
	MESSAGE[1]='E';
	MESSAGE[2]='L';
	MESSAGE[3]='L';
	MESSAGE[4]='O';
	
	printf("Here is the decoded message:   %c%c%c%c%c\n\n", MESSAGE[0],MESSAGE[1],MESSAGE[2],MESSAGE[3],MESSAGE[4]);
	
	return 0;
}
