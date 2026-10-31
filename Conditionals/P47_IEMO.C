#include<stdio.h>
void main()
{
	int mno;
	clrscr();
	printf("\n Enter Month Number: ");
	scanf("%d",&mno);
	if(mno<0||mno>12)
		printf("\n Invalid Month Number.");
	else
	{
		if(mno==2)
			printf("\n 28 Days.");
		else
		{
			if(mno==4||mno==6||mno==9||mno==11)
				printf("\n 30 Days.");
			else
				printf("\n 31 Days.");
		}
	}
	getch();
	return;

}