#include<stdio.h>
void main()
{
	int x,tmp,dig,fact,tot;
	clrscr();
	for(x=100;x<1000;x++)
	{
		tmp=x;
		for(tot=0;tmp>0;tmp/=10)
		{
			dig=tmp%10;
			fact=dig--;
			while(dig>1)
				fact*=dig--;
			tot+=fact;
		}
		if(tot==x)
			printf("\n %d",x);
	}
	getch();
	return;
}

