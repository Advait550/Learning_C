#include<stdio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	printf("\n %d Number is %s",x,(x%2==0)?"Even":"Odd");
	getch();
	return;
}