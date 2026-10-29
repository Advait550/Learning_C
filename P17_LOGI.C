#include<stdio.h>
void main()
{
	char ch;
	int no;
	clrscr();
	printf("\n Character: ");
	scanf("%c",&ch);
	printf("\n Number: ");
	scanf("%d",&no);
	printf("\n Character:%c\n Number:%d",ch,no);
	printf("\n %d",ch>=47&&ch<='z');
	printf("\n %d",ch>='0'&&ch<='9');
	printf("\n %d",ch=='A'||ch=='a');
	printf("\n %d",no%5==0&&no%7==0);
	printf("\n %d",no<0||no>100);
	printf("\n %d",no>=0&&no<=100);
	printf("\n %d",!(no>=0&&no<=100));
	printf("\n %d",no%5==0||no%7==0);
	getch();
	return;
}