#include<stdio.h>
void main()
{
	int i=0,x[10],tot=0,avg;
	clrscr();
	printf("\n Enter Array Data:\n ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
		tot+=x[i];
	}
	printf("\n Array Data: \n");
	for(i=0;i<10;i++)
	{
		printf("%4d",x[i]);

	}
	printf("\n Sum is %d",tot);
	printf("\n Avg is %d",tot/10);
	getch();
	return;
}