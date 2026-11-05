#include<stdio.h>
void main()
{
	int x[10],sv,rv,i=0;
	clrscr();
	printf("\n Enter Array Data:\n");
	for(i=0;i<10;i++)
		scanf("%d",&x[i]);
	printf("\n Enter Search Value: ");
	scanf("%d",&sv);
	printf("\n Enter Replace Value: ");
	scanf("%d",&rv);
	for(i=0;i<10;i++)
	{
		if(x[i]==sv)
			x[i]=rv;

	}
	printf("\n Array Data\n");
	for(i=0;i<10;i++)
		printf("%4d",x[i]);
	getch();
	return;
}