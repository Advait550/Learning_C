#include<stdio.h>
void main()
{
	int x,rev=0,dig;
	clrscr();
	printf("\n Enter a Number:");
	scanf("%d",&x);
	while(x>0)
	{
		dig=x%10;
		rev=rev*10+dig;
		x/=10;
	}
	printf("\n Reverse No is:%d",rev);
	getch();
	return;
}