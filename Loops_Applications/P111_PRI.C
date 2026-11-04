#include<stdio.h>
void main()
{
	int i=2,cnt=2,x;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	while(i<x)
	{
		if(x%i==0)
			cnt++;
		i++;
	}
	if(cnt==2)
		printf("\n Inputted No is Prime.");
	else
		printf("\n Inputted No is Not Prime.");
	getch();
	return;
}