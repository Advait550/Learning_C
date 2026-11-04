#include<stdio.h>
void main()
{
	int x,i=2;
	clrscr();
	for(x=10;x<=100;x++)
	{
		i=2;
		while(i<x)
		{
			if(x%i==0)
				break;
			i++;
		}
		if(x==i)
			printf("\n %d",x);
	}
	getch();
	return;
}