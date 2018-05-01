/*Q.3 A narcissistic number is a number that is the sum of its own digits each raised to the 
power of the number of digits. For example, the 3-digit decimal number 153 is a narcissistic 
number because 153 = 1^3 + 5^3 + 3^3. Write a program that will compute and display on screen all 
3-digit narcissistic numbers. */
#include <stdio.h>
#include <math.h>
int main (void)
{
	int n, d1, d2, d3, count=100;
	printf("Here are the narcissistic numbers:\n");
	while(count<1000)
	{
		n = count;
		d3 = n%10;
		n = n/10;
		d2 = n%10;
		n = n/10;
		d1 = n%10;
	
		int N = pow(d1,3) + pow(d2,3) + pow(d3,3);
	
			if(N == count)
			{
				printf("%d \n", N);
			}
	
		count= count + 1;
	
	}
	
	return 0;
}
