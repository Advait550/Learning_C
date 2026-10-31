#include<stdio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter Two Numbers: ");
	scanf("%d%d",&a,&b);
	printf("\n Maximum Number is: %d",(a>b)?a:b);
	getch();
	return;
}