#include<stdio.h>
void main()
{
	int i,max,a,b;
	clrscr();
	printf("\n Enter First Number: ");
	scanf("%d",&a);
	printf("\n Enter Second Number: ");
	scanf("%d",&b);
	max=(a>b)?a:b;
	for(i=max;(1);i+=max)
	{
		if(i%a==0&&i%b==0)
			break;

	}
	printf("\n LCM is %d",i);
	getch();
	return;
}