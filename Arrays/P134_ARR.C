#include<stdio.h>
void main()
{
	int x[10],i=0,min;
	clrscr();
	printf("\n Enter Array Data: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	for(min=x[0],i=1;i<10;i++)
	{
		if(x[i]<min)
			min=x[i];
	}
	printf("\n Minimum is %d",min);
	getch();
	return;
}