/*Q.2 Write a program that implements a “recursive function” which can take a positive integer, N, and 
computes the sum of all the non-negative integers smaller or equal to N. For example, if you call the 
function with N=5, it will output 1+2+3+4+5=15. */
#include <stdio.h>
//int sum(int n);
int main(void)
{
	int N, result, i;
	int sum(int i);
	printf("Enter a positive integer value for N: \n");
	scanf("%d", &N);
	
	result = sum(N);
	
	printf("sum=%d",result);
	
	return 0;
}
int sum (int i)
{
	int n, c;
	if(i!=0)
	{
		return i + sum(i-1);
	}
	else
	{
		return i;
	}
}
