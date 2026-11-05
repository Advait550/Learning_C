#include<stdio.h>
void main()
{
	char s[100],d[100];
	clrscr();
	printf("\n Source String:  ");
	gets(s);
	strcpy(d,s);
	puts(s);
	puts(d);
	getch();
	return;
}