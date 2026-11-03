#include<stdio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("\n Enter Line Count: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1||i==1||i==n/2+1||(j==n&&i<=n/2+1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	getch();
	return;
}