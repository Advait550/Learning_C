#include<stdio.h>
void main()
{
	char a;
	clrscr();
	printf("\n Enter a Character: ");
	scanf("%c",&a);
	if((a>='A'&&a<='F')||(a>='0'&&a<='9'))
		printf("\n %c is Hex",a);
	else
		printf("\n %c is Other",a);
	getch();
	return;
}