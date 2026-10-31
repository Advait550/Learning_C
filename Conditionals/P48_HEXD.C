#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter a Character: ");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='F')
		printf("\n Hex");
	else
	{
		if(ch>='0'&&ch<='9')
			printf("\n Digit");
		else
			printf("\n Other");
	}
	getch();
	return;
}