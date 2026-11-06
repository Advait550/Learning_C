#include<stdio.h>
void main()
{
	void oddeven();
	clrscr();
	oddeven();
	getch();
	return;
}
void oddeven()
{
	int no;
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	if(no%2==0)
		printf("\n Even");
	else
		printf("\n Odd");
}