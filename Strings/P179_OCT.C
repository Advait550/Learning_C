#include<stdio.h>
void main()
{
	char p[100],ch;
	int i=0,val,dno=0,mf=1;
	clrscr();
	printf("\n Enter a String: ");
	scanf("%s",p);
	i=strlen(p)-1;
	while(i>=0)
	{
		ch=p[i];
		if(ch>='0'&&ch<='7')
		{
			val=ch-48;
			dno=dno+(mf*val);
			mf*=8;
		}
		else
			break;
		i--;
	}
	if(i==-1)
		printf("\n Decimal No: %d",dno);
	else
		printf("\n Invalid Input");
	getch();
	return;
}