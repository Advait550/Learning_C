#include<stdio.h>
void main()
{
	int oc=0,ec=0,x,dig;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	while(x>0)
	{
		dig=x%10;
		if(dig%2==0)
			ec++;
		else
			oc++;
		x/=10;
	}
	printf("\n No of Odd Digits is %d",oc);
	printf("\n No of Even Digits is %d",ec);
	getch();
	return;
}