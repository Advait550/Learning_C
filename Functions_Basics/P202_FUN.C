#include<stdio.h>
void main()
{
	int Digcnt();
	clrscr();
	printf("\n Digit count : %d" , Digcnt());
	getch();
}
int Digcnt()
{
	int n , cnt = 0;
	printf("\n Enter a Number: ");
	scanf("%d" , &n);
	while(n > 0)
	{
		cnt++;
		n /= 10;
	}
	return cnt;
}