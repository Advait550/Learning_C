#include<stdio.h>
void main()
{
	int a,b,c,max;
	clrscr();
	printf("\n Enter Three Numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?a:b;
	max=(max>c)?max:c;
	printf("\n Maximum of Inputted No is %d",max);
	getch();
	return;
}