/*Q.3 Write a program that defines and initialize an integer and a floating point number and defines 
two pointers to point to those variables respectively. The program then uses the pointers only to display 
the contents of the variables. Also, the program should use the pointers to increase the value of the integer 
by 10 and multiply the floating point number by 3 and display the changed values of those variables on the 
screen. In the last step the program may use either the variable names or their pointers*/
#include <stdio.h>
int main(void)
{
	int i=10;
	float f=1.5;
	int *integer;
	float *decimal;
	integer=&i;
	decimal=&f;
	printf("integer: %d\nfloat: %.1f\n",*integer,*decimal);
	*integer=*integer+10;
	*decimal=*decimal*3;
	printf("Integer + 10 = %d\nfloat * 3 = %.1f",*integer,*decimal);
	
	return 0;
}
