#include<stdio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	printf("\n Inputted Number is %s",
	       ((x<0)?"Negative":((x>0)?"Positive":"Zero")));
	getch();
	return;
}