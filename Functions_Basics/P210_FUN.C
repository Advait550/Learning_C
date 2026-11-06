#include<stdio.h>
void main()
{
	int OddEven(int) , n;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d" , &n);
	if(OddEven(n))
		printf("\n Inputted Number Is Even.");
	else
		printf("\n Inputted Number Is Odd.");
	getch();
}
int OddEven(int n)
{
	if(n % 2 == 0)
		return 1;
	else
		return 0;
}