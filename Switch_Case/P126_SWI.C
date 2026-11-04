#include<stdio.h>
void main()
{
	int days,mon;
	clrscr();
	printf("\n Enter Month Number: ");
	scanf("%d",&mon);
	if(mon<1||mon>12)
	{
		printf("\n Invalid Month Number.");
		return;
	}
	switch(mon)
	{
		case 2:
			days=28;break;
		case 4:
			days=30;break;
		case 6:
			days=30;break;
		case 9:
			days=30;break;
		case 11:
			days=30;break;
		default:
			days=31;
	}
	printf("\n Days: %d in month: %d",days,mon);
	getch();
	return;

}