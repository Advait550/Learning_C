#include<stdio.h>
void main()
{
	int no,sdig,dig,tmp;
	clrscr();
	printf("\n Enter a Number:  ");
	scanf("%d",&no);
	for(sdig=0;sdig<=9;sdig++)
	{
		tmp=no;
		while(tmp>0)
		{
			dig=tmp%10;
			if(sdig==dig)
				break;
			tmp/=10;
		}
		if(tmp==0)
			printf("\n %d",sdig);
	}
	getch();
	return;
}