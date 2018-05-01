/*Q.2 Convert Fahrenheit to Celsius. Take the value in Fahrenheit from the user, 
convert it to Celsius and display both the values on the screen.  */
#include <stdio.h>
int main (void)
{
	//Declare Variables.
	float f;
	
	//Take the temperature value from the user.
	printf("This program will convert a temperature from Fahrenheit to Celsius. \nPlease enter an integer for the value of Fahrenheit. \n");
	scanf("%f",&f);
	
	//Convert the temperature into celsius.
	float c=(f-32)*(5.0/9.0);
	
	//Display the temperature in celsius.
	printf("Here is the temperature in celsius: %f degrees. \n\n", c);
	
	printf("Have a nice day :)");
	return 0;
}
