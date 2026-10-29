#include<stdio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("\n Enter Two Numbers: ");
	scanf("%d%d",&x,&y);
	printf("\n x:%d\n y:%d",x,y);
	z=x;
	x=y;
	y=z;
	printf("\n x:%d\n y:%d",x,y);
	getch();
	return;
}