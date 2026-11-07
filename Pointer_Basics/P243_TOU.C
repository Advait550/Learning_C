#include<stdio.h>
void main()
{
	char k[50];
	char *p = k;
	clrscr();
	printf("\n String : ");
	gets(k);
	printf("\n String : ");
	puts(k);
	while(*p)
	{
		if(*p >= 97 && *p <= 122)
			*p = *p - 32;
		p++;
	}
	printf("\n String : ");
	puts(k);
	getch();
}