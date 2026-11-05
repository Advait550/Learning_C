#include<stdio.h>
void main()
{
	int x[10],xpos=0,i=0;
	clrscr();
	printf("\n Enter Array Data: \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=1;i<10;i++)
	{
		if(x[i]>x[xpos])
			xpos=i;
	}
	printf("\n Maximum Number Is: %d",x[xpos]);
	printf("\n Maximum Position Is: %d",xpos);
	getch();
	return;
}