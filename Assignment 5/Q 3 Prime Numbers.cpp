/*Q.3  Write a program that will display on the console a list of N prime numbers where a prime 
number is an integer which is not divisible by any other than 1 and itself. The value of N should
be larger than 10 and smaller than 30 and should be taken from the user at the beginning of the program. 
For instance, if N=11, your computer should display the following list: 2 3 5 7 11 13 17 19 23 29 31*/
#include <stdio.h>
int main(void)
{
	int count=0, num, num2=5;
	printf("Enter an integer amount less than 30 but larger than 10 to see a list of that many prime numbers: ");
	scanf("%d", &num);
	printf("2 3 ");
	while((count>=0)&&(count<=num-2))
	{
		if((num2%2!=0)&&(num2%3!=0))
		{
			printf("%d ",num2);
			count++;
		}
		num2++;
		
	}
	return 0;
}
