#include<stdio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	if(x<0)
		printf("\n Negative");
	else
	{
		if(x>0)
			printf("\n Positive");
		else
			printf("\n Zero");

	}
	getch();
	return;
}