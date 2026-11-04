#include<stdio.h>
void main()
{
	int no,dig,tmp,tot=0;
	clrscr();
	for(no=100;no<1000;no++)
	{
		tmp=no;
		tot=0;
		while(tmp>0)
		{
			dig=tmp%10;
			tot=tot+(dig*dig*dig);
			tmp/=10;
		}
		if(tot==no)
			printf("\n %d",no);
	}
	getch();
	return;
}