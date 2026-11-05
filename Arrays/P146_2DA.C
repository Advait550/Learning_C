#include<stdio.h>
void main()
{
	int x[3][4],i=0,j=0;
	clrscr();
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("x[%d][%d]: ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	printf("\n Matrix: \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",x[i][j]);
		}
		printf("\n");
	}
	getch();
	return;
}