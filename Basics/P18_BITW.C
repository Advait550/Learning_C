#include<stdio.h>
void main()
{
	int no,dig,tot=0;
	clrscr();
	printf("\n Enter a 3 Digit Number: ");
	scanf("%d",&no);
	dig=no%10;
	tot+=dig;
	no/=10;
	dig=no%10;
	tot+=dig;
	no/=10;
	dig=no%10;
	tot+=dig;
	no/=10;
	printf("\n Digit Sum: %d",tot);
	getch();
	return;

}