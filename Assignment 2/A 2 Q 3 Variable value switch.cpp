/*Q.3 Two numbers are input through the keyboard and are assigned to the variables named n1 and n2,
 respectively. Write a program to interchange the contents of n1 and n2*/
#include <stdio.h>
int main (void)
{
	int n1, n2;
	printf("Enter two integers \n");
	scanf("%d %d", &n1, &n2);
	
	int variable = n1;
	n1 = n2;
	n2=variable;
	
	printf("Here are the integers: %d  %d", n1, n2);
	
	
	return 0;
}
