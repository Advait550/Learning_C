#include<stdio.h>
void main()
{
	char p[5][15];
	int i=0;
	clrscr();
	while(i<5)
	{
		printf("\n Enter City Names: ");
		gets(p[i]);
		i++;
	}
	printf("\n City Names: ");
	for(i=0;i<5;i++)
	{
		puts(p[i]);
	}
	getch();
	return;
}