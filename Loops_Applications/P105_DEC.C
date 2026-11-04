#include<stdio.h>
void main()
{
	long int bno=0,mf=1;
	int dig,dno;
	clrscr();
	printf("\n Enter a Decimal Number: ");
	scanf("%d",&dno);
	while(dno>0)
	{
		dig=dno%2;
		bno=bno+(mf*dig);
		mf*=10;
		dno/=2;
	}
	printf("\n Binary No is %ld",bno);
	getch();
	return;
}