/*Q.1  Write a program that takes a positive integer from the user and calls a function to compute all 
the prime factors of the entered integer. The called function should also displays those factors on the 
screen. For example if the user enters 12 the program output should be: 1, 2, 3. */
#include <stdio.h>

//Return the number if it is a prime number, return -999 if it is not
int isPrime(int j){
	for(int x = 2; x < j/2; x++){
		if(j % x == 0)
			return -999;
	}
	return j;
}

//Return the number of it is a factor of the number and -999 if it is not
void findFactor(int i){
	for(int x = 1; x < i/2; x++)
	{
		if(i%x==0)
		{
			if(isPrime(x)!=-999)
			{
				printf("%d, ",x);
			}
		}
	}
}

int main(void)
{

	int i;
	printf("enter a positive integer\n");
	scanf("%d",&i);
	findFactor(i);
	return 0;
}
