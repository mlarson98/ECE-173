/*Q.2 Write a program that will create an integer array of size 25. Compute and store 25 Fibonacci numbers in it and then display on the screen. */
#include <stdio.h>
int main(void)
{
	int list[25];
	int count=1, num=0, num2=1, num3=0, i=1;
	printf ("%d ", list[0]=1);
	while(count<25)
	{
		num3=num+num2;
		list[i]=num3;
		printf("%d ",list[i]);
		num=num2;
		num2=num3;
		i++;
		count++;
	}
	return 0;
}
