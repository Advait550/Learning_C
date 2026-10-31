#include<stdio.h>
void main()
{
	char a;
	clrscr();
	printf("\n Enter a character: ");
	scanf("%c",&a);
	printf("\n Inputted Character is a %s",((a>='0'&&a<='9')?"Digit":"Non-digit"));
	getch();
	return;
}