#include<stdio.h>
void main()
{
	int x,i=1,min=0;
	clrscr();
	while(i<=10)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&x);
		if(x<min)
			x=min;
		i++;
	}
	printf("\n Minimum is %d",min);
	getch();
	return;
}