#include<stdio.h>
void main()
{
	int v1,v2,res;
	char ch;
	clrscr();
	printf("\n Enter First Operand: ");
	scanf("%d",&v1);
	printf("\n Operators \n +:Add\n -:Sub\n *:mult\n /:Div\n ");
	printf("\n Enter Choice: ");
	scanf("%c",&ch);
	printf("\n Enter Second Operand: ");
	scanf("%d",&v2);
	switch(ch)
	{
		case '+':
			res=v1+v2;break;
		case '-':
			res=v1-v2;break;
		case '*':
			res=v1*v2;break;
		case '/':
			res=v1/v2;break;
	}
	printf(" %d %c %d = %d",v1,ch,v2,res);
	getch();
	return;

}