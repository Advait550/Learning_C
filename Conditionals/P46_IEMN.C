#include<stdio.h>
void main()
{
	int a,b,c,min;
	clrscr();
	printf("\n Enter Three Numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
			min=a;
		else
			min=c;
	}
	else
	{
		if(b<c)
			min=b;
		else
			min=c;
	}
	printf("\n Minimum is %d",min);
	getch();
	return;
}