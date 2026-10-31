#include<stdio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	if(x%5==0&&x%7==0)
		printf("\n %d is Divisible By both 5 & 7",x);
	else
	{
		if(x%5==0)
			printf("\n %d is Divisible by 5",x);
		else
		{
			if(x%7==0)
				printf("\n %d is Divisible by 7",x);
			else
				printf("\n %d is Not Divisible by 5 & 7",x);
		}
	}
	getch();
	return;
}