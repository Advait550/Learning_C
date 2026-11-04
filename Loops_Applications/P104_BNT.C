#include<stdio.h>
void main()
{
	long int bno;
	int dig,mf=1,dno=0;
	clrscr();
	printf("\n Enter a Binary Number: ");
	scanf("%ld",&bno);
	while(bno>0)
	{
		dig=bno%10;
		if(dig>1)
			break;
		dno=dno+(mf*dig);
		mf*=2;
		bno/=10;
	}
	if(bno==0)
		printf("\n Decimal No : %d",dno);
	else
		printf("\n Invalid Binary Number.");
	getch();
	return;
}