#include<stdio.h>
void main()
{
	int x[5] , i = 0 , j = 4;
	void display(int);
	void input(int*);
	void swap(int* , int*);
	clrscr();
	for(i = 0 ; i < 5 ; i++)
		input(&x[i]);
	for(i = 0 ; i < 5 ; i++)
		display(x[i]);
	for(i = 0 , j = 4 ; i < j ; i++ , j--)
		swap(&x[i] , &x[j]);
	for(i = 0 ; i < 5 ; i++)
		display(x[i]);
	getch();
}

void input(int *a)
{
	printf("\n Enter Number : ");
	scanf("%d" , a);
	return;
}

void swap(int *a , int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void display(int p)
{
	printf("\n Data : %d" , p);
	return;
}