#include<stdio.h>
void main()
{
	void DigSum();
	clrscr();
	DigSum();
	getch();
}
void DigSum()
{
	int n , sum = 0;
	printf("\n Enter a Number: ");
	scanf("%d" , &n);
	while(n > 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	printf("\n Digit Sum is : %d" , sum);
}