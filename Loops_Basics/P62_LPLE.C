#include<stdio.h>
void main()
{
	int x,len=0;
	clrscr();
	printf("\n Enter A Number: ");
	scanf("%d",&x);
	while(x>0)
	{
		len++;
		x/=10;
	}
	printf("\n Inputted No Has %d Digits",len);
	getch();
	return;
}