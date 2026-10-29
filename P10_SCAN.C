#include<stdio.h>
void main()
{
	char ch;
	int no;
	clrscr();
	printf("\n Type a Grade: ");
	scanf("%c",&ch);
	printf("\n Enter Roll No: ");
	scanf("%d",&no);
	printf("\n Roll No: %d",no);
	printf("\n Grade: %c",ch);
	getch();
	return;
}