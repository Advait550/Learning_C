#include<stdio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	printf("\n Inputted No. is %s Range 0-100",((x>=0&&x<=100)?"Within":"Outside"));
	getch();
	return;
}