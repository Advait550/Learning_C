#include<stdio.h>
void main()
{
	int i=1,x;
	clrscr();
	printf("\n Enter Number For Table: ");
	scanf("%d",&x);
	printf("\n Table \n");
	do
	{
		printf("\n %d",x*i);
		i++;
	}
	while(i<=10)
	getch();
	return;
}