#include<stdio.h>
void main()
{
	void revno();
	clrscr();
	revno();
	getch();
	return;
}
void revno()
{
	int no,rev;
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	while(no>0)
	{
		rev=(rev*10)+(no%10);
		no/=10;
	}
	printf("\n Reverse Number is : %d",rev);
	return;
}