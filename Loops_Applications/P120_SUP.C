#include<stdio.h>
void main()
{
	int i=2,no,dig,tmp;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
			break;
		i++;
	}
	if(i<no)
		printf("\n Not Prime.");
	else
	{
		tmp=no;
		while(tmp>0)
		{
			dig=tmp%10;
			if(dig==2||dig==3||dig==5||dig==7)
				tmp/=10;
			else
				break;
		}
		if(tmp>0)
			printf("\n Prime No");
		else
			printf("\n Super prime No");

	}
	getch();
	return;
}