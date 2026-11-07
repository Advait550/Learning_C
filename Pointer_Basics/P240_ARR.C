#include<stdio.h>
void main()
{
	int x[5] , tmp;
	int *p = x + 0;
	int *q = x + 4;
	clrscr();
	printf("\n Enter Array Data :\n");
	while(p <= q)
	{
		scanf("%d" , p);
		p = p + 1;
	}
	p = x + 0;
	printf("\n Array Data: ");
	while(p <= q)
	{
		printf("%4d" , *p);
		p = p + 1;
	}
	for(p = x + 0 ; p <= q ; p++ , q--)
	{
		tmp = *p;
		*p = *q;
		*q = tmp;
	}
	printf("\n Data: ");
	for(p = x + 0 , q = x + 4; p <= q ; p++)
	{
		printf("%4d" , *p);
	}
	getch();
}