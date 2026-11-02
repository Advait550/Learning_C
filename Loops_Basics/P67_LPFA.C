#include<stdio.h>
void main()
{
	int fact=1,x;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	while(x>1)
	{
		fact=fact*x;
		x--;
	}
	printf("\n Factorial Of Inputted No is: %d",fact);
	getch();
	return;
}