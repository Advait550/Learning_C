#include<stdio.h>
void main()
{
	void fibo();
	clrscr();
	fibo();
	getch();
}
void fibo()
{
	int a = -1 , b = 1 , c , cnt;
	for(cnt = 0 ; cnt < 10 ; cnt++)
	{
		c = a + b;
		printf("%4d" , c);
		a = b;
		b = c;
	}
}