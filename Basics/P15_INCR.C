#include<stdio.h>
void main()
{
	int x,y;
	clrscr();
	printf("\n Enter No: ");
	scanf("%d",&x);
	printf("\n %d",x);
	x++;
	printf("\n %d",x);
	++x;
	printf("\n %d",x);
	y=++x;
	printf("\n x:%d\n y:%d",x,y);
	y=x++;
	printf("\n x:%d\n y:%d",x,y);
	getch();
	return;
}