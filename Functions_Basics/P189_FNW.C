#include<stdio.h>
void main()
{
	void message();
	clrscr();
	message();
	getch();
	return;
}
void message()
{
	int i=1;
	for(i=1;i<=5;i++)
		printf("\n Welcome");
	return;
}