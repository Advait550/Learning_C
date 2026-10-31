#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter a Character: ");
	scanf("%c",&ch);
	printf("\n Inputted Character is a %s",((ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')?"Vowel":"Consonent"));
	getch();
	return;
}