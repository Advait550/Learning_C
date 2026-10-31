#include<stdio.h>
void main()
{
	int no,qno;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	qno=no/100;
	if(qno>0&&qno<10)
		printf("\n %d is a 3 Digit Number.",no);
	else
		printf("\n %d is not 3 Digit Number",no);
	getch();
	return;
}