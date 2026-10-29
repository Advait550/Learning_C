#include<stdio.h>
void main()
{
	char p='A',q='Z',r;
	clrscr();
	printf("\n P:%c\n Q:%c",p,q);
	r=p;
	p=q;
	q=r;
	printf("\n P:%c\n Q:%c",p,q);
	getch();
	return;
}