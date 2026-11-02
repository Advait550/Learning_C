#include<stdio.h>
void main()
{
	int i=1,x,max=0;
	clrscr();
	while(i<=10)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&x);
		if(x>max)
			max=x;
		i++;
	}
	printf("\n Maximum No is %d",max);
	getch();
	return;
}