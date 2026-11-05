#include<stdio.h>
void main()
{
	int x[3][3],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("x[%d][%d]: ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	printf("\n Matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",x[i][j]);
		}
		printf("\n");
	}
	printf("\n Transpose: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",x[j][i]);
		}
		printf("\n");
	}
	getch();
	return;
}