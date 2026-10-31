#include<stdio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter Three Numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n Max Of Inputted No is %d",((a>b)?((a>c)?a:c):((b>c)?b:c)));
	getch();
	return;
}