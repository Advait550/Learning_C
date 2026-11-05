#include<stdio.h>
void main()
{
	int x[5],i,j,val;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Data: ");
		scanf("%d",&val);
		for(j=i-1;j>=0&&val<x[j];j--)
			x[j+1]=x[j];
		x[j+1]=val;
	}
	printf("\n Output \n");
	for(i=0;i<5;i++)
		printf("%4d",x[i]);
	getch();
	return;
}