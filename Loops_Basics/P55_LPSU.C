#include<stdio.h>
void main()
{
	int i=1,os=0,es=0,x;
	clrscr();
	while(i<=10)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&x);
		if(x%2==0)
			es=es+x;
		else
			os=os+x;
		i++;
	}
	printf("\n Sum of Odd No is: %d",os);
	printf("\n Sum of Even No is: %d",es);
	getch();
	return;
}