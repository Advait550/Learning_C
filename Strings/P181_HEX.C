#include<stdio.h>
void main()
{
	char p[40],ch;
	int i=0,val,dno=0,mf=1;
	clrscr();

	printf("\n Enter a Hex String: ");
	scanf("%s",&p);
	i=strlen(p)-1;
	while(i>=0)
	{
		ch=p[i];
		if(ch>='A'&&ch<='F')
			val=ch-65;
		else
		{
			if(ch>='0'&&ch<='9')
				val=ch-48;
			else
				break;
		}
		dno=dno+(mf*val);
		mf*=16;
		i--;
	}
	if(i==-1)
		printf("\n Decimal No : %d",dno);
	else
		printf("\n Invalid Input");
	getch();
	return;


}