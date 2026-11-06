#include<stdio.h>
void main()
{
	char P[50];
	void Display(char []);
	clrscr();
	printf("\n Enter String: ");
	gets(P);
	Display(P);
	getch();
}

void Display(char P[])
{
	puts(P);
}