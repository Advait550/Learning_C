#include<stdio.h>
void main()
{
	void toUpper(char *);
	char p[100];
	int i = 0;
	clrscr();
	printf("\n String: ");
	gets(p);
	puts(p);
	while(p[i] != '\0')
	{
		toUpper(&p[i]);
		i++;
	}
	puts(p);
	getch();
	return;
}

void toUpper(char *a)
{
	if(*a >= 97 && *a <= 122)
		*a = *a - 32;
	return;
}