#include<stdio.h>
void main()
{
	int i=2,x;
	clrscr();
	printf("\nenter a Number: ");
	scanf("%d",&x);
	while(i<x)
	{
		if(x%i==0)
			break;
		i++;
	}
	if(i==x)
		printf("\n Inputted No is Prime. ");
	else
		printf("\n Not Prime.");
	getch();
	return;
}