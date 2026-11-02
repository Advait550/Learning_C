#include<stdio.h>
void main()
{
	int x,tot=0;
	while(1)
	{
		printf("\n Enter a Number: ");
		scanf("%d",&x);
		if(x==0)
			break;
		else
			tot+=x;
	}
	printf("\n Total Of Inputted No is: %d",tot);
	getch();
	return;
}