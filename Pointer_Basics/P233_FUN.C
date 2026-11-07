#include<stdio.h>
void main()
{
	int a , b;
	void swap(int , int);
	clrscr();
	printf("\n Enter A & B: ");
	scanf("%d%d" , &a , &b);
	swap(a , b);
	printf("\n After Swapping: ");
	printf("\n %d , %d" , a , b);
	getch();
}
void swap(int a , int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}