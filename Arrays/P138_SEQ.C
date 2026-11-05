#include<stdio.h>
void main()
{
	int i=0,x[10],cnt=0,sv;
	clrscr();
	printf("\n Enter Array Data:\n");
	for(i=0;i<10;i++)
		scanf("%d",&x[i]);
	printf("\n Enter Search Value: ");
	scanf("%d",&sv);
	for(i=0;i<10;i++)
	{
		if(x[i]==sv)
			cnt++;
	}
	printf("\n Found %d Times",cnt);
	getch();
	return;
}