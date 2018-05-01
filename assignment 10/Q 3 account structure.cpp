/*Q.3 Write a program that defines object of account structure as shown below: 
struct account{ 
int cid; 
float balance; 
struct account *nextc; }; 
 
The program then creates a linked list of four objects of the account structure. 
Initialize the members of each object and display them on the screen. */
#include <stdio.h>
int main(void)
{
	struct account{
		int cid;
		float balance;
		struct account *nextc;
	};
	struct account n1,n2,n3,n4;
	
	n1.cid=1234;
	n1.balance=63.45;
	n2.cid=5432;
	n2.balance=5000.45;
	n3.cid=7890;
	n3.balance=112.50;
	n4.cid=4567;
	n4.balance=35.60;
	n1.nextc=&n2;
	n2.nextc=&n3;
	n3.nextc=&n4;
	n4.nextc=&n1;
	
	
	printf("cid: %d	%d	%d	%d",n4.nextc->cid,n1.nextc->cid,n2.nextc->cid,n3.nextc->cid);
	printf("\nbalance: %.2f	%.2f	%.2f	%.2f",n4.nextc->balance,n1.nextc->balance,n2.nextc->balance,n3.nextc->balance);

	
	return 0;
}
