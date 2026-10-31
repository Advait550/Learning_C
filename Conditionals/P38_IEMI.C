#include<stdio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter Two Numbers: ");
	scanf("%d%d",&a,&b);
	if(a<b)
		printf("\n Minimum is %d",a);
	else
		printf("\n Minimum is %d",b);
	getch();
	return;
}