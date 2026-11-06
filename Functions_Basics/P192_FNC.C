#include<stdio.h>
void main()
{
	void count();
	clrscr();
	count();
	getch();
	return;
}
void count()
{
	int no,cnt=0;
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	while(no>0)
	{
		cnt++;
		no/=10;
	}
	printf("\n %d Digits",cnt);
	return;
}