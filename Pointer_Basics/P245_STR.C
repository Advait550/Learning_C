#include<stdio.h>

	void Scopy(char *d , char *s)
	{
		while(*s)
		{
			*d = *s;
			s++;
			d++;
		}
		*d = '\0';
	}

	void Sappend(char *d , char *s)
	{
		d = d + strlen(d);
		strcpy(d , s);
	}

	void main()
	{
		char p[50] , q[50] , r[100];
		clrscr();
		printf("\n String 1 : ");
		gets(p);
		printf("\n String 2 : ");
		gets(q);
		Scopy(r , p);
		Sappend(r , q);
		puts(p);
		puts(q);
		puts(r);
		getch();
	}
