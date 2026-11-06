#include<stdio.h>
void main()
{
	int isbinary();
	clrscr();
	if(isbinary())
		printf("\n Inputted Number Is Binary.");
	else
		printf("\n Inputted Number Is Not Binary.");
	getch();
}
int isbinary()
{
	int n , dig;
	printf("\n Enter a Number: ");
	scanf("%d" , &n);
	while(n > 0)
	{
		dig = n % 10;
		if(dig == 1 || dig == 0)
		{
			n /= 10;
			continue;
		}
		else
			break;
	}
	if(n <= 0)
		return 1;
	else
		return 0;
}