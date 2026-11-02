#include<stdio.h>
void main()
{
	int i=1,x,pos=0,neg=0,zero=0;
	clrscr();
	while(i<=10)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&x);
		if(x>0)
			pos++;
		else
		{
			if(x<0)
				neg++;
			else
				zero++;
		}
		i++;
	}
	printf("\n Positive No's are %d",pos);
	printf("\n Negative No's are %d",neg);
	printf("\n Zero's are %d",zero);
	getch();
	return;
}