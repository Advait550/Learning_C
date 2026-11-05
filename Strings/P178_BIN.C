#include<stdio.h>
void main()
{
	char p[100],ch;
	int i=0,val,mf=1,dno=0;
	clrscr();
	printf("\n Enter a String: ");
	scanf("%s",p);
	i=strlen(p)-1;
	while(i>=0)
	{
		ch=p[i];
		if(ch>='0'&&ch<='1')
		{
			val=ch-48;
			dno=dno+(mf*val);
			mf*=2;
		}
		else
			break;
		i--;

	}
	if(i==-1)
		printf("\n Decimal Number: %d",dno);
	else
		printf("\n Invalid Output");
	getch();
	return;
}