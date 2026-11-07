#include<stdio.h>
void main()
{
	int x = 10;
	clrscr();
	printf("\n x : %d" , x);
	printf("\n Address : %u" , &x);
	printf("\n x : %d" , *(&x));
	getch();
}