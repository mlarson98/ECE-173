/*Q.2 Write a program which will ask the user to enter a character and then classify it as a vowel, a decimal digit or something else? */
#include <stdio.h>
int main(void)
{
	int N;
	char letter, a, e, i, o, u;
	while(true)
	{
		printf("Enter characters to see if they are vowels, decimal digits, or neither: \n");
		scanf("%d", &N);
		scanf("%c", &letter);	
		
		if(N>0)
		{
			printf("\nThe character you have entered is a decimal digit.\n\n");
		}
		if((letter=='a')||(letter=='e')||(letter=='i')||(letter=='o')||(letter=='u'))
		{
			printf("\nThe character you have entered is a vowel.\n\n");
		}
		if(letter=='y')
		{
			printf("\nThe character you have entered is sometimes a vowel.\n\n");
		}
		if((letter!='a')&&(letter!='e')&&(letter!='i')&&(letter!='o')&&(letter!='u')&&(letter!='y')&&!(N>0)&&(letter!='A')&&(letter!='E')&&(letter!='I')&&(letter!='O')&&(letter!='U')&&(letter!='Y'))
		{
			printf("\nThe character you have entered is neither a vowel nor a decimal digit.\n\n");
		}
		if((letter=='A')||(letter=='E')||(letter=='I')||(letter=='O')||(letter=='U'))
		{
			printf("\nThe character you have entered is a vowel.\n\n");
		}
		if(letter=='Y')
		{
			printf("\nThe character you have entered is sometimes a vowel.\n\n");
		}
	}
	
	return 0;
}
