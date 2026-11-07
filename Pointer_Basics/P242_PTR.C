#include<stdio.h>
void main()
{
	char k[50] ;
	char *p = k;
	clrscr();
	printf("\n String : ");
	gets(k);
	printf("\n String : ");
	while(*p)
	{
		printf("%c" , *p);
		p++;
	}
	getch();
}