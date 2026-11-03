#include<stdio.h>
void main()
{
	int n,i,j;
	clrscr();
	printf("\n enter Line Count: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1||j==n||j==i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	getch();
	return;
}