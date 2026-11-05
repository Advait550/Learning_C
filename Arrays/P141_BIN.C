#include<stdio.h>
void main()
{
	int i=0,l,r,mid,x[10],sv;
	clrscr();
	while(i<10)
	{
		printf("\n Data: ");
		scanf("%d",&x[i]);
		if(i>0)
		{
			if(x[i]<x[i-1])
			{
				printf(" Invalid Output");
				continue;
			}
		}
		i++;
	}
	printf("\n Enter Search Value: ");
	scanf("%d",&sv);
	l=0;r=9;
	do
	{
		mid=(l+r)/2;
		if(x[mid]==sv)
			break;
		if(sv<mid)
			r=mid-1;
		else
			l=mid+1;
	}
	while(l<=r);
	if(l<=r)
		printf("\n Found");
	else
		printf("\n Not Found");
	getch();
	return;
}