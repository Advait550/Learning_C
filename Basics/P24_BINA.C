#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter a Character: ");
	scanf("%c",&ch);
	printf("\n Inputted Character is %s",((ch=='0'||ch=='1')?"Binary":"Not Binary"));
	getch();
	return;
}