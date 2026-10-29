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
	x+=2;
	printf("\n %d",x);
	y=x-2;
	printf("\n %d",y);
	y-=3;
	printf("\n %d",y);
	x/=2;
	printf("\n %d",x);
	y*=2;
	printf("\n %d",y);
	x+=y;
	printf("\n x:%d\n y:%d",x,y);
	getch();
	return;
}