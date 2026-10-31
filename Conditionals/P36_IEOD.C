#include<stdio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	if(x%2==0)
		printf("\n %d is Even Number.",x);
	else
		printf("\n %d is Odd Number.",x);
       getch();
       return;
}