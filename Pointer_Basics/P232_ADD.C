#include<stdio.h>
void main()
{
	int a = 10;
	int *b = &a;
	int **c = &b;
	clrscr();
	printf("\n %d" , a);
	printf("\n %u" , &a);
	printf("\n %d" , *b);
	printf("\n %u" , b);
	printf("\n %u" , &b);
	printf("\n %u" , *(&b));
	printf("\n %d" , *(*(&b))+5);
	printf("\n %u" , c);
	printf("\n %u" , &c);
	printf("\n %u" , *c);
	printf("\n %d" , **c);
	getch();
}