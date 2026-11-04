#include<stdio.h>
void main()
{
	int x,flg,dig;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	while(x>0)
	{
		dig=x%10;
		if(dig>1)
			flg=0;
		x/=10;
	}
	if(flg==0)
		printf("\n Inputted Number is Not Binary.");
	else
		printf("\n Inputted Number is Binary.");
	getch();
	return;
}