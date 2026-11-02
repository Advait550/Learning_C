#include<stdio.h>
void main()
{
	int x,tot=0;
	clrscr();
	while(1)
	{
		printf("\n Enter a Number: ");
		scanf("%d",&x);
		if(x==0)
			break;
		else
		{
			if(x<0)
				continue;
		}
		tot+=x;
	}
	printf("\n Sum Of Positive No is: %d",tot);
	getch();
	return;
}