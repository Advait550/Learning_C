#include<stdio.h>
void main()
{
	int x[10],i=0,xpos=0;
	clrscr();
	printf("\n Enter Array Data:\n ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
		if(i>0)
		{
			if(x[i]>x[xpos])
				xpos=i;
		}
	}
	printf("\n Maximum No is %d",x[xpos]);
	printf("\n Maximum position is %d",xpos);
	getch();
	return;
}