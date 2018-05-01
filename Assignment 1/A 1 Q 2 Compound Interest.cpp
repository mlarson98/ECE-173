/*Q3. Take values for the principle, yearly interest rate and number of years. 
Compute the interest earned on the principle and display it on screen. */
#include <stdio.h>
#include <math.h>
int main (void)
{
	//Declare Variables.
	float C, P, r, n;
	
	//Take values from the user.
	printf("This program will compute compound interest. Please enter the principle, \nyearly interest rate, and then the number of years.\n");
	scanf("%f %f %f", &P, &r, &n);
	
	//Compute the compound interest.
	C=P*(pow((1 + r),n)-1);
	
	//Display compound interest.
	printf("Here is the compound interest: $%f\n\n", C);
	
	printf("Have a nice day :)");
	return 0;
}
