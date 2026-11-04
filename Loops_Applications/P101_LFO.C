#include<stdio.h>
void main()
{
	int i,x;
	clrscr();
	printf("\n Enter No For Table :  ");
	scanf("%d",&x);
	printf("\n Table \n");
	for(i=1;i<=10;i++)
	{
		printf("\n %d",x*i);

	}
	getch();
	return;
}