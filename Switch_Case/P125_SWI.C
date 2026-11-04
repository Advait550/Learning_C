#include<stdio.h>
void main()
{
	int mon,day,year;
	clrscr();
	printf("\n Enter Birth Day: ");
	scanf("%d",&day);
	if(day<1||day>31)
	{	printf("\n Invalid");
		return;
	}
	printf("\n Enter Birth Month: ");
	scanf("%d",&mon);
	if(mon<1||mon>12)
	{
		printf("\n Invalid");
		return;
	}
	printf("\n Enter Birth Year: ");
	scanf("%d",&year);
	if(year<2000||year>2020)
	{
		printf("\n Invalid");
		return;
	}
	printf("\n Birth date\n : %2d-",day);
	switch(mon)
	{
		case 1:
		printf("Jan");break;
		case 2:
		printf("Feb");break;
		case 3:
		printf("Mar");break;
		case 4:
		printf("Apr");break;
		case 5:
		printf("May");break;
		case 6:
		printf("Jun");break;
		case 7:
		printf("July");break;
		case 8:
		printf("Aug");break;
		case 9:
		printf("Sept");break;
		case 10:
		printf("Oct");break;
		case 11:
		printf("Nov");break;
		case 12:
		printf("Dec");break;

	}
	printf("%4d",year);
	getch();
	return;

}