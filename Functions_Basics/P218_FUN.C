#include<stdio.h>
void main()
{
	char p[50];
	void Display(char []);
	clrscr();
	printf("\n Enter String: ");
	gets(p);
	Display(p);
	getch();
}
void Display(char p[])
{
	int i = 0;
	while(p[i] != '\0')
	{
		printf("%c" , p[i]);
		i++;
	}
}