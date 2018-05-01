/*Q.1  Declare a Global 10 length array of structure variables of type “student” and call it st_information[10]. 
So, each element of this array is a structure variable of type “student”. Initialize (set values to) the elements 
of the array using the student information for 10 students provided above. Write a function that will display the 
“overall score” of all 10 students in a single column.  */
#include <stdio.h>
int main(void)
{
struct  score
{  
	float  HW;         
	float  Exam1;  
	float  Exam2;        
	float  Exam3;  
};     
	
struct  student
{  
	int   id;  
	int   Year_of_School;  
	struct score course_scores;  
};  
 
struct student st_information[10]=
{
	{1, 4, 78, 67, 90, 80},	{2, 3, 80, 85, 86, 75},{3, 2, 78, 76, 88, 82},
	{4, 3, 72, 95, 77, 76},{5, 4, 94, 84, 96, 83},{6, 1, 67, 76, 76, 79},
	{7, 2, 82, 72, 78, 84},{8, 3, 75, 85, 72, 77},{9, 4, 52, 86, 81, 98},
	{10, 2, 76, 79, 91, 74} 
};
float grade[10];
int i;
	printf ("Overall Scores rounded to two decimal places:\n");
	for(i=0;i<10;i++)
	{
	grade[i]= st_information[i].course_scores.HW/5+st_information[i].course_scores.Exam1/4+st_information[i].course_scores.Exam2/4+3*st_information[i].course_scores.Exam3/10;
	printf (" %.2f \n", grade[i]);
	}

return 0;
}
