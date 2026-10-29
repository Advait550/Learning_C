#include<stdio.h>
#include<stdio.h>
void main()
{
	char ch;
	int no;
	clrscr();
	printf("\n Type a Character: ");
	scanf("%c",&ch);
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	printf("\n Character: %c\n Number: %d",ch,no);
	printf("\n %d",ch>=65);
	printf("\n %d",ch<='z');
	printf("\n %d",ch=='1');
	printf("\n %d",ch=='0');
	printf("\n %d",no%2==0);
	printf("\n %d",no>0);
	printf("\n %d",no<0);
	printf("\n %d",no==0);
	printf("\n %d",no!=0);
	getch();
	return;
}