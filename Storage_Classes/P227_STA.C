#include<stdio.h>
void update()
{
	static int val = 0;
	printf("\n %d" , ++val);
}
void main()
{
	clrscr();
	update();
	update();
	update();
	getch();
}