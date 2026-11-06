#include<stdio.h>
void main()
{
	int oddeven();
	clrscr();
	if(oddeven())
		printf("\n Inputted Number Is Even.");
	else
		printf("\n Inputted Number IS Odd.");
	getch();
}
int oddeven()
{
	int n;
	printf("\n Enter a Number: ");
	scanf("%d" , &n);
	if(n % 2 == 0)
		return 1;
	else
		return 0;
}