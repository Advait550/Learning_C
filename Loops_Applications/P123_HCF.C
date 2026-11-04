#include<stdio.h>
void main()
{
	int i,a,b,max;
	clrscr();
	printf("\n Enter First Number: ");
	scanf("%d",&a);
	printf("\n Enter Second Number: ");
	scanf("%d",&b);
	max=(a>b)?a:b;
	for(i=max;i>0;i--)
	{
		if(a%i==0&&b%i==0)
			break;
	}

	printf("\n HCF is: %d",i);
	getch();
	return;
}