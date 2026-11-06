#include<stdio.h>
void main()
{
	int DigSum();
	clrscr();
	printf("\n Digit Sum Is : %d" , DigSum());
	getch();
}
int DigSum()
{
	int n , sum = 0;
	printf("\n Enter a Number : ");
	scanf("%d" , &n);
	while(n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}