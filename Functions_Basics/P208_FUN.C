#include<stdio.h>
void main()
{
	int n , Digsum(int);
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d" , &n);
	printf("\n Digit Sum IS : %d" , Digsum(n));
	getch();
}
int Digsum(int n)
{
	int sum = 0;
	while(n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}