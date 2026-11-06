#include<stdio.h>
void main()
{
	int RevNo();
	clrscr();
	printf("\n Reverse number Is : %d" , RevNo());
	getch();
}
int RevNo()
{
	int no , rno = 0;
	printf("\n Enter a number: ");
	scanf("%d" , &no);
	while(no > 0)
	{
		rno = rno * 10 + (no % 10);
		no /= 10;
	}
	return rno;
}