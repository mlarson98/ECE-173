/*Q.3 Write a program that computes course average for all three individual exams and 
the average of “overall scores”. The output of this function will be four possible floating 
point numbers, one for each of the three exams and one for the overall score. */
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

	for(i=0;i<10;i++)
	{
	grade[i]= st_information[i].course_scores.HW/5+st_information[i].course_scores.Exam1/4+st_information[i].course_scores.Exam2/4+3*st_information[i].course_scores.Exam3/10;
	}
float overall_score_average=(grade[0]+grade[1]+grade[2]+grade[3]+grade[4]+grade[5]+grade[6]+grade[7]+grade[8]+grade[9]+grade[10])/10;
printf("overall score class average:	%.2f\n",overall_score_average);

float ex1[10];
float ex2[10];
float ex3[10];
for(i=0;i<10;i++)
{
	ex1[i]=st_information[i].course_scores.Exam1;
}
float average_exam1=(ex1[0]+ex1[1]+ex1[2]+ex1[3]+ex1[4]+ex1[5]+ex1[6]+ex1[7]+ex1[8]+ex1[9]+ex1[10])/10;
printf("\nClass average for exam 1:	%.2f\n",average_exam1);

for(i=0;i<10;i++)
{
	ex2[i]=st_information[i].course_scores.Exam2;
}
float average_exam2=(ex2[0]+ex2[1]+ex2[2]+ex2[3]+ex2[4]+ex2[5]+ex2[6]+ex2[7]+ex2[8]+ex2[9]+ex2[10])/10;
printf("\nClass average for exam 2:	%.2f\n",average_exam2);

for(i=0;i<10;i++)
{
	ex3[i]=st_information[i].course_scores.Exam3;
}
float average_exam3=(ex3[0]+ex3[1]+ex3[2]+ex3[3]+ex3[4]+ex3[5]+ex3[6]+ex3[7]+ex3[8]+ex3[9]+ex3[10])/10;
printf("\nClass average for exam 3:	%.2f\n",average_exam3);

return 0;
}
