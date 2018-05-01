/*Q.1 Write a program that continuously ask the user to enter an integer number. If the entered number 
is a multiple of 7 it is displayed on the screen and the loop is continued. If the number is not a multiple 
of 7 it is not displayed but the loop is continued. The loop exits only if the user enters -23 and before ending 
the program displays the sum of all the numbers entered by the user including -23. */
#include <stdio.h>
int main(void)
{
	int count, num, num2=0, num3;
	printf("You will be prompted to enter integers continuously to see if they are multiples of 7. Enter -23 to end the loop.\n\n\n");
	while(true)
	{
		printf("\n\nenter an integer:\n\n");
		scanf("%d", &num);
		num3=num2+num;
		num2=num3;
		
		if (num==-23)
		{
			printf("sum of all numbers entered = %d",num2);
			break;
		}
		if(num%7==0)
		{
			printf("\n\n%d is a multiple of 7", num);
		}
		
	}
	return 0;
}
