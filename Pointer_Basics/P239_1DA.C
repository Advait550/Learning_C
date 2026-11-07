#include<stdio.h>
void main()
{
	int x[5] , i = 0;
	clrscr();
	printf("\n Enter Array Data: \n");
	while(i++ < 5)
		scanf("%d" , (x + i));
	for(i = 0 ; i < 5 ; i++)
		printf("%4d" , *(x + i));
	getch();
}