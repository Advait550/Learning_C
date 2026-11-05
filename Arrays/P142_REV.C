#include<stdio.h>
void main()
{
	int x[10],i=0,j=9,tmp;
	clrscr();
	while(i<10)
	{
		printf("\nEnter Number: ");
		scanf("%d",&x[i]);
		i++;
	}
	printf("\n Before Processing: ");
	for(i=0;i<10;i++)
		printf("%4d",x[i]);
	for(i=0,j=9;i<j;i++,j--)
	{
		tmp=x[i];
		x[i]=x[j];
		x[j]=tmp;
	}
	printf("\n After Processing: ");
	for(i=0;i<10;i++)
		printf("%4d",x[i]);
	getch();
	return;
}