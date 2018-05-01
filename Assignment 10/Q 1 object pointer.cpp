/*Q.1 Write a program that defines and initializes an object with four members, and a pointer 
to the object. Then the program uses the pointer (NOT the name of the object) to display the 
values of the members of the object on the screen. */
#include <stdio.h>
int main(void)
{
	struct structure
	{
		int member1;
		float member2;
		char member3;
		int member4;
	};
	struct structure object, *p1;
	p1=&object;
	p1->member1=5;
	p1->member2=3.56;
	p1->member3='H';
	p1->member4=20;
	printf("%d\n%.2f\n%c\n%d",p1->member1,p1->member2,p1->member3,p1->member4);
	
	return 0;
}
