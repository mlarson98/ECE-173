/*Q.1 Write a program that will take 7 integers from the user, store them in an array and display them on the screen 
1) in the order as they were entered, 2) in increasing order and 3) in the decreasing order. 
For instance if the input is: 13  -23 1 45  -2 16 -5 then the output will be:  
13 -23 1 45 -2  16 -5 
-23 -5 -2 1 13 16 45 
45 16 13 1 -2 -5 -23 */
#include <stdio.h>
int main(void)
{
	int list[7];
	int i=0, count=0, t, index, temp;
	printf("Enter 7 integers to see them displayed in the order entered, then in increasing order, \nand finally in decreasing order\n");
	
	while(count<7)
	{
		scanf("%d", &list[count]);
		count++;
	}
	printf("Integers in the order you entered: ");
	while(i<7)
	{
		printf("%d ",list[i]);
		i++;
	}
	printf("\n\n");
	//decreasing order
	for (index=0; index < 7; ++index )
	{
		for (t=index+1;t<7;t++)
		{
			if (list[index]<=list[t])
			{
				temp=list[index];
				list[index]=list[t];
				list[t]=temp;
			}   
		}              
	}  
	
	printf("Here are the numbers in decreasing order:");
	
	for(index=0; index < 7; ++index)
	{
		printf (" %d ", list[index]);
	}   
		printf("\n\n");
		
	//increasing order	
	for (index=0; index < 7; ++index )
	{
		for (t=index+1;t<7;t++)
		{
			if (list[index]>=list[t])
			{
				temp=list[index];
				list[index]=list[t];
				list[t]=temp;
			}   
		}              
	}  
	
	printf("Here are the numbers in decreasing order:");
	for(index=0; index < 7; ++index)
	{
		printf (" %d ", list[index]);
	}
	return 0;
}
