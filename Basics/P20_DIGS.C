#include<stdio.h>
int main()
{
	int no,dig,df=100,tot=0;
	
	printf("\n Enter 3 Digit Number: ");
	scanf("%d",&no);
	dig=no/df;
	tot+=dig;
	no%=df;
	df/=10;
	dig=no/df;
	tot+=dig;
	no%=df;
	df/=10;
	dig=no/df;
	tot+=dig;
	no%=df;
	df/=10;
	printf("\n Digit Sum is : %d",tot);
	getch();
	return 0;



}
