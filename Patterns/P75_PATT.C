#include<stdio.h>
void main()
{
	int n,i=1,j;
	clrscr();
	printf("\n Enter Line Count: ");
	scanf("%d",&n);
	printf("\n Output \n");
	while(i<=n)
	{
		j=1;
		while(j<=i)
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