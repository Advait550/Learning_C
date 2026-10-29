#include<stdio.h>
void main()
{
	int no,dig,rev=0;
	clrscr();
	printf("\n Enter a 3 Digit Number: ");
	scanf("%d",&no);
	dig=no%10;
	rev=rev*10+dig;
	no/=10;
	dig=no%10;
	rev=rev*10+dig;
	no/=10;
	dig=no%10;
	rev=rev*10+dig;
	no/=10;
	printf("\n Reverse Number is: %d",rev);

	getch();
	return;
}