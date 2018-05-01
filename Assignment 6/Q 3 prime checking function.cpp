/*Q.3 Write a function that takes an integer as input and returns 1 if the entered number is a prime and 0 
if the number is not a prime. Now “call” this function in the main part of your program for Q.1 to count how 
many among the entered numbers are prime. Consider only the positive numbers for checking whether it is prime 
or not. For example, if user enters the numbers as shown above, then the program must declare that there is one prime number.*/
#include <stdio.h>


int main(void)
{
	printf("Enter numbers to check if they are prime. A 1 will be printed if prime, and a 0 will be printed if not prime.\n");
	int i, t=0;
	void prime_tester (int i);
	while(true)
	{
	printf("enter an integer: ");
	scanf("%d", &i);
	prime_tester(i);
	}
	
	return 0;
}

void prime_tester (int i)
{
	while(true)
	{
		if(i==2)
		{
			printf("1\n");
			break;
		}
		if(i==3)
		{
			printf("1\n");
			break;
		}
		if((i%2!=0)&&(i%3!=0))
		{
			printf("1\n");
			break;
		}
		else
		{
			printf("0\n");
			break;
		}
	}
		
	
	return;
}
