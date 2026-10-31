#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter a Character: ");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("\n Uppercase");
	else
	{
		if(ch>='a'&&ch<='z')
			printf("\n Lowercase");
		else
		{
			if(ch>='0'&&ch<='9')
				printf("\n Digit");
			else
				printf("\n Other");

		}

	}
	getch();
	return;
}