#include<stdio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	printf("\n %d is %s by 5 & 7",x,(x%5==0&&x%7==0)?"Divisible":"Not Divisible");
	getch();
	return;


}