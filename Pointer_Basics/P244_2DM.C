#include<stdio.h>
void main()
{
	int x[3][3] , i , j;
	clrscr();
	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 3 ; j++)
		{
			printf("\n X[%d][%d] : " , i , j);
			scanf("%d" , *(x + i) + j);
		}
	}
	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 3 ; j++)
		{
			printf("%4d" , *(*(x + i) + j));
		}
		printf("\n");
	}
	getch();
}