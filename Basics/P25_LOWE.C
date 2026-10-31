#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter a Character: ");
	scanf("%c",&ch);
	printf("\n Inputted Character is %s",((ch>='a'&&ch<='z')?"Lowercase":"other"));
	getch();
	return;
}