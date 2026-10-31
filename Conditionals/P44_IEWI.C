#include<stdio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Enter a Integer: ");
	scanf("%d",&x);
	if(x>100)
		printf("\n %d is Above 100",x);
	else
	{
		if(x<0)
			printf("\n %d is Below Zero",x);
		else
			printf("\n %d is Within Range 0-100",x);
	}
	getch();
	return;
}