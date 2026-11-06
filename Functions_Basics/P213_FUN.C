#include<stdio.h>
void main()
{
	int i , A[5];
	void Display(int[5] , int);
	clrscr();
	printf("\n Enter Array Data: \n");
	for(i = 0 ; i < 5 ; i++)
		scanf("%d" , &A[i]);
	Display(A , 5);
	getch();
}
void Display(int p[] , int n)
{
	int i = 0;
	while(i < n)                  {
		printf("%4d" , p[i]);
		i++;      };
	return;
}
