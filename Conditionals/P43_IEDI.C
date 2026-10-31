#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter a Character: ");
	scanf("%c",&ch);
	if(ch>='0'&&ch<='9')
		printf("\n %c is a Digit",ch);
	else
		printf("\n %c is Not a Digit",ch);
	getch();
	return;
}