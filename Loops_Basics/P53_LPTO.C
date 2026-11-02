#include<stdio.h>
void main()
{
	int i=1,x,tot=0;
	clrscr();
	while(i<=10)
	{
		printf("\n Enter a Number: ");
		scanf("%d",&x);
		tot=tot+x;
		i++;
	}
	printf("\n Total of Inputted Numbers is: %d",tot);
	getch();
	return;
}