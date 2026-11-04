#include<stdio.h>
void main()
{
	int x,dig;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	while(x>0)
	{
		dig=x%10;
		if(dig>1)
			break;
		x/=10;
	}
	if(x==0)
		printf("\n Inputted No is Binary.");
	else
		printf("\n Inputted No is Not Binary.");
	getch();
	return;
}