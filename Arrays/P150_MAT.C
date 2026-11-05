#include<stdio.h>
void main()
{
	int x[3][3],y[3][3],z[3][3],i=0,j=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n x[%d][%d]: ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n y[%d][%d]: ",i,j);
			scanf("%d",&y[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			z[i][j]=x[i][j]-y[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",x[i][j]);
		printf("\t");
		for(j=0;j<3;j++)
			printf("%4d",y[i][j]);
		printf("\t");
		for(j=0;j<3;j++)
			printf("%4d",z[i][j]);
		printf("\n");
	}
	getch();
	return;

}