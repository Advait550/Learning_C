#include<stdio.h>
void main()
{
	char p[100];
	int i=0;
	clrscr();
	printf("\n String:  ");
	gets(p);
	puts(p);
	while(p[i]!='\0')
	{
		if(p[i]>=65&&p[i]<=90)
			p[i]+=32;
		i++;
	}
	puts(p);
	getch();
	return;
}