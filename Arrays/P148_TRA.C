#include<stdio.h>
void main()
{
	int x[3][3],i,j,tmp;
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
			printf("%4d",x[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tmp=x[i][j];
			x[i][j]=x[j][i];
			x[j][i]=tmp;
		}
	}
	printf("\n Transpose: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)

			printf("%4d",x[i][j]);
		printf("\n");
	}
	getch();
	return;


}