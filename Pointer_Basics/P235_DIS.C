#include<stdio.h>
void main()
{
	int x;
	void Display(int);
	void Input(int *);
	void Update(int * , int);
	clrscr();
	Input(&x);
	Display(x);
	Update(&x , 10);
	Display(x);
	getch();
}
void Display(int x)
{
	printf("\n %d" , x);
}
void Update(int *a , int b)
{
	*a = *a + b;
}
void Input(int *x)
{
	printf("\n Enter A Number: ");
	scanf("%d" , x);
}