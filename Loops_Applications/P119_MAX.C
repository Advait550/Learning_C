#include<stdio.h>
void main()
{
	int no,dig,sdig,tmp,nn=0;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	for(sdig=9;sdig>0;sdig--)
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
	printf("\n OUTPUT \n \n %d",nn);
	getch();
	return;
}