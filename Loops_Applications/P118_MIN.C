#include<stdio.h>
void main()
{
	int no,sdig,dig,tmp,nn=0;
	clrscr();
	printf("\n ENter a Number :");
	scanf("%d",&no);
	for(sdig=0;sdig<=9;sdig++)
	{
		tmp=no;
		while(tmp>0)
		{
			dig=tmp%10;
			if(dig==sdig)
				nn=nn*10+dig;
			tmp/=10;
		}
	}
	printf("\n OUTPUT \n");
	printf("\n %d",nn);
	getch();
	return;
}