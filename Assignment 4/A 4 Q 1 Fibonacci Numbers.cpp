/*Q.1 Write a program that will display on the console a list of N numbers where each number in the list 
starting from the third one is sum of the previous two. First two numbers in this list are 1 and 1. The 
value of N should be taken from the user at the beginning of the program. That is, for N=7, your computer 
should display the following list: 1 1 2 3 5 8 13. */
#include <stdio.h>
int main (void)
{
	int N, f=0, f2=1, f3, c=1;
	printf("Enter an integer: ");
	scanf("%d", &N);
	printf("%d ",f2);

		while(c<N)
		{
			
			f3=f+f2;
			f=f2;
			f2=f3;
			c++;
			printf("%d ", f3);
		
		}
	
	return 0;
}
