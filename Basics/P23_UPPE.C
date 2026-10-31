#include<stdio.h>
void main()
{
	char a;
	clrscr();
	printf("\n Enter a Character: ");
	scanf("%c",&a);
	printf("\n Character %c is %scase",a,((a>=65&&a<=90)?"Upper":"Other"));
	getch();
	return;
}