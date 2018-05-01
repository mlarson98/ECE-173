/*Q.3 Write a program which will ask the user to enter a large number, say M which is larger 
than 1000. Then, the computer must list all the numbers which are perfect cubes but smaller 
than M. For instance, if M=1001, then the computer should print the following list 1 8 27 64 125 216 343 512 729 1000. */
#include <stdio.h>
int main(void)
{
	int M, i,n1=2, n2=1;
	printf("Enter a large integer: ");
	scanf("%d",&M);
	
	while(n2<M)
	{		
		printf("%d ",n2);	
		n2=n1*n1*n1;
		n1++;		
	}
	return 0;
}
