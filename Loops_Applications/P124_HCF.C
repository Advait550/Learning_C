#include<stdio.h>
void main()
{
	int a,b,min,i,hcf;
	clrscr();
	printf("\n Enter First Number: ");
	scanf("%d",&a);
	printf("\n Enter Second Number: ");
	scanf("%d",&b);
	min=(a<b)?a:b;
	for(i=1;i<=min;i++)
	{
		if(a%i==0&&b%i==0)
			hcf=i;
	}
	printf("\n HCF is: %d",hcf);
	getch();
	return;
}