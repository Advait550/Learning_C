#include<stdio.h>
void main()
{
	int i=1,x;
	clrscr();
	printf("\n Enter Number For Table: ");
	scanf("%d",&x);
	printf("\n Table \n");
	while(i<=10)
	{
		printf("\n %d",x*i);
		i++;
	}
	getch();
	return;
}