#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter a Character: ");
	scanf("%c",&ch);
	printf("\n Inputted Character is a %s",((ch>='A'&&ch<='F')?"Hex Alphabet":
						((ch>='0'&&ch<='9')?"Hex Digit":"Other")));
	getch();
	return;
}