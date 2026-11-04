#include<stdio.h>
void main()
{
	int no,sdig,dig;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	printf("\n Enter Search Digit: ");
	scanf("%d",&sdig);
	if(sdig<0||sdig>9)
		return;
	while(no>0)
	{
		dig=no%10;
		if(dig==sdig)
			break;
		no/=10;
	}
	if(no==0)
		printf("\n Not Found.");
	else
		printf("\n Found.");
	getch();
	return;

}