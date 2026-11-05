#include<stdio.h>
void main()
{
	int i=0,x[10];
	clrscr();
	printf("\n Enter Array Data:\n ");
	for(i=0;i<10;i++)
		scanf("%d",&x[i]);
	for(i=1;i<10;i++)
	{
		if(x[i]<x[i-1])
			break;
	}
	if(i==10)
		printf("\n Ordered");
	else
		printf("\n Not Ordered");
	getch();
	return;
}