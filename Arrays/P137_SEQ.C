#include<stdio.h>
void main()
{
	int i=0,sv,x[10];
	clrscr();
	printf("\n Enter Array Data:\n");
	for(i=0;i<10;i++)
		scanf("%d",&x[i]);
	printf("\n Enter Search Value: ");
	scanf("%d",&sv);

	for(i=0;i<10;i++)
	{
		if(x[i]==sv)
			break;
	}
	if(i==10)
		printf("\n Not Found");
	else
		printf("\n Found At Position %d",i);
	getch();
	return;
}