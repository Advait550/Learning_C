#include<stdio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Emter a Number: ");
	scanf("%d",&x);
	if(x>=1&&x<=100)
		printf("\n %d is Within Range 0-100",x);
	else
		printf("\n %d is out of Range 0-100",x);
	getch();
	return;
}