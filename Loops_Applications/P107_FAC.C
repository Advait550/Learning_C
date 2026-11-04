#include<stdio.h>
void main()
{
	long int f=1;
	int no;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	while(no>0)
	{
		f*=no;
		no--;
	}
	printf("\n Factorials are:  %d",f);
	getch();
	return;
}