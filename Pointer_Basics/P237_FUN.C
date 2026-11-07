#include<stdio.h>
void main()
{
	int a , b;
	int *Findmax(int* , int*);
	int *ptr;
	clrscr();
	printf("\n Enter 2 Numbers : \n");
	scanf("%d%d" , &a , &b);
	ptr = Findmax(&a , &b);
	printf("\n Max : %d" , *ptr);
	getch();
}

int *Findmax(int *p , int *q)
{
	if(*p > *q)
		return p;
	else
		return q;
}