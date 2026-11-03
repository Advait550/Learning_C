#include<stdio.h>
void main()
{
	int i=1,j,n;
	clrscr();
	printf("\n Enter Line Count: ");
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
	return;
}