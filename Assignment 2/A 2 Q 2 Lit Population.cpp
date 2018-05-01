/*Q.2 Write a program that will ask the user to enter the percentage of men in a town. Then the percentage of total 
literacy and the percentage of literate men with respect to the total population. Finally, it will ask for the total population of the town.
 With these four numbers, the program will then compute the total number of illiterate men and women in the town and display those numbers on the screen. 
For example, if these numbers are 52, 48, 35 and 80000, respectively then the computed numbers should be 13600 and 28000, respectively. */
#include <stdio.h>
int main (void)
{
	float men, total_lit, lit_men;
	int pop;
	printf ("Please enter the following information, if it is a percentage, please enter in decimal form:\n percentage of men in a town, percentage of total literacy in the town, \npercentage of literate men, and total population of the town\n");
	scanf ("%f %f %f %d", &men, &total_lit, &lit_men, &pop);
	
	int men_total = pop*men;
	int women_total = pop-men_total;
	
	int total_lit_men = pop*lit_men;
	int total_lit_women = pop*total_lit - total_lit_men;
	
	int total_nlit_men = men_total - total_lit_men;
	int total_nlit_women = women_total - total_lit_women;
	
	printf ("The number of illiterate men is %d and the number of illiterate women is %d", total_nlit_men, total_nlit_women);
	
	return 0;
}
