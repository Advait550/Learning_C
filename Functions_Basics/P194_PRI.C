#include<stdio.h>
void main()
{
	void letter();
	clrscr();
	letter();
	getch();
}
void letter()
{
	int i = 1 , j = 1 , n;
	printf("\n Enter Line Count: ");
	scanf("%d" , &n);
	for(i = 1 ; i <= n ; i++)
	{
		for(j = 1 ; j <=n ; j++)
		{
			if(i == 1 || i == n || i + j == n + 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}