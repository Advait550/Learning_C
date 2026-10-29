#include<stdio.h>
void main()
{
	int x,y;
	clrscr();
	printf("\n Enter No: ");
	scanf("%d",&x);
	printf("\n %d",x);
	x=x+2;
	printf("\n %d",x);
	y=x*3;
	printf("\n %d",y);
	y=y/2;
	printf("\n %d",y);
	y=y-6;
	printf("\n %d",y);
	printf("\n %d",x/y);
	getch();
	return;
}