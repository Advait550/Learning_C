#include<stdio.h>
void main()
{
	int i=1,x,max;
	clrscr();
	while(i<=10)
	{
		printf("\n Enter any Number: ");
		scanf("%d",&x);
		if(i==1)
			max=x;
		else
		{
			if(x>max)
				max=x;
		}
		i++;
	}
	printf("\n Max Of Inputted No is %d",max);
	getch();
	return;
}