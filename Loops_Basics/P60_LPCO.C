#include<stdio.h>
void main()
{
	int x,i=1,min;
	clrscr();
	while(i<=10)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&x);
		if(i==1)
			min=x;
		else
		{
			if(x<min)
				min=x;
		}
		i++;
	}
	printf("\n Min Of Inputted No is %d",min);
	getch();
	return;

}