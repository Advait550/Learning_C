#include<stdio.h>
void main()
{
	int x,dig,tot=0;
	clrscr();
	printf("\n Enter A Number: ");
	scanf("%d",&x);
	while(x>0)
	{
		dig=x%10;
		tot+=dig;
		x/=10;
	}
	printf("\n Sum Of Digits is %d",tot);
	getch();
	return;
}