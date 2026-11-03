#include<stdio.h>
void main()
{
	int i=1,j=1,n;
	clrscr();
	printf("\n Enter Line Count: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("*");
		if(++j>n)
		{
			printf("\n");
			i++;
			j=1;
		}
	}
	getch();
	return;
}