#include<stdio.h>
void main()
{
	int a , b;
	void swap(int * , int *);
	clrscr();
	printf("\n Enter A: ");
	scanf("%d" , &a);
	printf("\n Enter B: ");
	scanf("%d" , &b);
	swap(&a , &b);
	printf("\n A: %d \n B : %d" , a , b);
	getch();
}
void swap(int *a , int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}