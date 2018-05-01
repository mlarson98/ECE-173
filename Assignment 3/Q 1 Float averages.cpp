/*Q.1 Write a program that will continuously take floating numbers as input 
from the user until zero is inputted. Then it will display the sum and average of all the non-zero numbers inputted. */
#include <stdio.h>
int main (void)
{
	printf("Enter as many floats as you want to see the sum and average of them. \nEnter zero when you have entered all the numbers you want.\n");
	float sum=0;
	int count=0;
	float temp=1;
	while (temp>0) 
	{
		scanf ("%f", &temp);
		sum=sum+temp;
		if (temp>0)
			{
			count=count+1;
			}
	}
	printf("this is the sum: %f\n\n", sum);
	printf ("this is the average: %f", sum/count);
	
	return 0;
}
