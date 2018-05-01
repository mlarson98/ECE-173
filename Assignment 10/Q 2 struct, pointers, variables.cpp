/*Q.2 Write a program that defines an object with three members, where all the members are pointers. 
Define and initialize three ordinary int/float variables. Make sure that the members of the object 
points to the variables defined later. Finally, use the structure notations to display the values of 
the ordinary variables. */
#include <stdio.h>
int main(void)
{
	
	struct structure 
	{
		int *member1;
		int *member2;
		float *member3;
	};
	int i=2;
	int num=3;
	float d=9.5;
	struct structure object;
	object.member1=&i;
	object.member2=&num;
	object.member3=&d;
	
	printf("%d\n%d\n%.1f",*object.member1,*object.member2,*object.member3);
	
	
	
	return 0;
}
