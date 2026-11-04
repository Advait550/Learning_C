#include<stdio.h>
void main()
{
	int i=2,x;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	while(i<x/2)
	{
		if(x%i==0)
			break;
		i++;
	}
	if(i==x/2)
		printf("\n Inputted No is Prime.");
	else
		printf("\n Not Prime.");
	getch();
	return;

}