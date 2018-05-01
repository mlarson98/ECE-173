/*Q.3 Write a program which allows the user to continuously enter integers. It only stores the entered 
even numbers in an array and discards the entered odd numbers. This process goes on until the user enters 
three even numbers. The program finally displays the average of stored even numbers on the screen. */
#include <stdio.h>
int main(void)
{
	void even_number_storage(int list[3]);
	void average_function(int i);
	int i, count=0;
	int list[3];
	
	printf("Keep entering integers: \n");
	
	average_function(i);
	
	return 0;
}

void even_number_storage(int list[3])
{
	int i, count=0;
	while(count<3)
	{
		scanf("%d", &i);
		if(i%2==0)
		{
			list[count]=i;
			count++;
		}
	}
	return;
}
void average_function(int i)
{
	int list[3];
	even_number_storage(list);
	i=(list[0]+list[1]+list[3])/3;
	printf("%d ", i);
}
