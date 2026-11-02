#include<stdio.h>
void main()
{
	int x,max,min,i=1;
	clrscr();
	while(i<=10)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&x);
		if(i==1)
			max=min=x;
		else
		{
			if(x>max)
				max=x;
			else
			{
				if(x<min)
					min=x;
			}
		}
		i++;
	}
	printf("\n Maximum is %d \n Minimum is %d",max,min);
	getch();
	return;
}