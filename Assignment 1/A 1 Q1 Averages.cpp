/*Q.1 Write a program that will take two floating point numbers and an integer from the user, 
compute its average and display the average on the screen. */ 
#include <stdio.h>
int main (void)
{
	//Declare the variables that will be used.
	float num1, num2;
	int num3;
	
		//Take variables from the user.
		printf("This program will take the average of three numbers. The first two can be floating point numbers, \n but the third must be an integer. Please enter two floating point numbers, then enter an integer \n");
		scanf("%f %f %d", &num1, &num2, &num3);
	
			//Compute the average of the variables.
			float average=(num1+num2+num3)/3;
	
			//Print the average for the user to see.
			printf("Here is the average: %f \n\n",average);
			
			
			printf("Have a nice day :)");
	return 0;
}
