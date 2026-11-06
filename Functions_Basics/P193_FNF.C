#include<stdio.h>
void main()
{
	void factorial();
	clrscr();
	factorial();
	getch();
	return;
}
void factorial()
{
	int no,f=1;
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	while(no>0)
	{
		f=f*(no--);
	}
	printf("\n Factorials : %d",f);
	return;
}