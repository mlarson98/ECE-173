/*Q.1 Write a program that will take 7 integers from the user, store them in an array. Write three functions which takes the aforementioned array as input and display them on the screen 1) in the order as they were entered, 2) in increasing order and 3) in the decreasing order. For instance if the input is: 13  -23 1 45  -2 16 -5 then the call to the first function will display:  
13 -23 1 45 -2  16 -5, 
call to the second function will display: 
-23 -5 -2 1 13 16 45 
Finally, call to the 3rd function will display: 
45 16 13 1 -2 -5 -23. */
#include <stdio.h>

int main(void)
{
	int i=0;
	int list[7];
	void print_function (int list[7]);
	void decreasing_function (int list[7]);
	void increasing_function (int list[7]);
	printf("Enter 7 integers:  \n");
	while(i<7)
	{
		scanf("%d ", &list[i]);
		i++;
	}
	print_function(list);
	decreasing_function(list);
	increasing_function(list);
	
	return 0;
}
void print_function (int list[7])
{
	int i;
	printf("\nHere is what you entered: \n");
	for(i=0;i<7;i++)
	{
		printf("%d ", list[i]);
	}
	return;
}
void decreasing_function (int list[7])
{
	int d, e;
	int i;
	for(i=0;i<7;i++)
	{
		for(d=i+1;d<7;d++)
		{
			if(list[i]<=list[d])
			{
				e=list[i];
				list[i]=list[d];
				list[d]=e;
			}
		}
	}
	printf("\nHere are the numbers in decreasing order: \n");
	for(i=0;i<7;i++)
	{
		printf("%d ", list[i]);
	}
	return;
}
void increasing_function (int list[7])
{
	int count, temp;
	int i;
	printf("\nhere are the numbers in increasing order: \n");
	for(i=0;i<7;i++)
	{
		for(count=i+1;count<7;count++)
		{
			if(list[count]<=list[i])
			{
				temp=list[i];
				list[i]=list[count];
				list[count]=temp;
			}
		}
	}
	for(i=0;i<7;i++)
	{
		printf("%d ", list[i]);
	}
	return;
}
