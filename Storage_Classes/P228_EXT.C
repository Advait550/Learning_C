#include<stdio.h>
int val = 0;
void update()
{
	printf("\n %d" , ++val);
	return;
}
void main()
{
	clrscr();
	update();
	printf("\n %d" , val);
	update();
	printf("\n %d" , val);
	getch();
}