#include<stdio.h>
void main()
{
	int flg=1,x,tot=0;
	clrscr();
	while(flg)
	{
		printf("\n Enter a Number: ");
		scanf("%d",&x);
		if(x==0)
			flg=0;
		else
			tot+=x;
	}
	printf("\n Sum is %d",tot);
	getch();
	return;
}