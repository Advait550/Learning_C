#include<stdio.h>
void main()
{
	int i=0,x[10],max;
	clrscr();
	printf("\n Enter Array Data:\n ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\n Array Data: ");
	for(i=0;i<10;i++)
	{
		printf("%4d",x[i]);
	}
	for(max=x[0],i=1;i<10;i++)
	{
		if(x[i]>max)
			max=x[i];
	}
	printf("\n Maximum is: %d",max);
	getch();
	return;
}