#include<stdio.h>
#define m 3
#define n 3
void main()
{
	int x[5][5];
	void Display(int [] [n] , int , int);
	int i , j;
	clrscr();
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			printf("\n x[%d][%d] : " , i , j);
			scanf("%d" , &x[i][j]);
		}
	}
	Display(x , m , n);
	getch();
}
void Display(int x[][n] , int r , int c)
{
	int i , j;
	printf("\n Matrix\n");
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n ; j++)
			printf("%4d" , x[i][j]);
		printf("\n");
	}
	return;
}