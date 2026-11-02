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
			es++;
		else
			os++;
		i++;
	}
	printf("\n Number Of Odds:%d",os);
	printf("\n Number Of Evens:%d",es);
	getch();
	return;
}