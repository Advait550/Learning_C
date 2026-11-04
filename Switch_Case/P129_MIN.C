#include<stdio.h>
void main()
{
	int v1,v2,res,flg=0;
	char opr;
	while(1)
	{
		if(flg==0)
		{
			printf("\n Operand 1: ");
			scanf("%d",&v1);
			flg=1;
		}
		else
			printf("\n Operand 1: %d",v1);
		printf("\n Operators \n +:Add\n -:Sub\n *:Mult\n /:Div\n Choice: ");
		scanf("%c",&opr);
		if(opr=='E')
			break;
		printf("\n Operand 2: ");
		scanf("%d",v2);
		switch(opr)
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
		v1=res;
	}
	printf("\n Result: %d",res);
	getch();
	return;
}