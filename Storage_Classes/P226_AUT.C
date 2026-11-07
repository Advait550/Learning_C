#include<stdio.h>
void main()
{
	int p = 10;
	clrscr();
	{
		int p = 100;
		{
			int p = 1000;
			printf("\n %d" , p);
		}
		printf("\n %d" , p);
	}
	printf("\n %d" , p);
	getch();
}