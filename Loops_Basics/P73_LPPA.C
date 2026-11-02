#include<stdio.h>
void main()
{
	int i=1,j=1,n;
	clrscr();
	printf("\n Enter Line Count: ");
	scanf("%d",&n);
	printf("\n Output \n");
	while(i<=n)
	{
		printf("*");
		if(++j>i)
		{
			printf("\n");
			i++;
			j=1;
		}
	}
	getch();
	return;
}