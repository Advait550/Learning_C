#include<stdio.h>
void main()
{
	int x,flg=1,tot=0;
	clrscr();
	while(flg>0)
	{
		printf("\n Enter a Number: ");
		scanf("%d",&x);
		if(x==0)
			flg=0;
		else
			tot+=x;
	}
	printf("\n Sum is: %d",tot);
	getch();
	return;
}