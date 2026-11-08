#include<stdio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	printf("\n Inputted No is %s",((x<0)?"Below Zero":((x>100)?"Above 100":"Within Range 0-100")));
	getch();
	return;
}