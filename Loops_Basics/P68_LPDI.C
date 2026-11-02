#include<stdio.h>
void main()
{
	int x,i=1;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	printf("\n Table \n");
	while(i<=10)
	{
		printf("\n%d",x*i);
		i++;
	}
	getch();
	return;
}