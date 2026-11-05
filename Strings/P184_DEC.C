#include<stdio.h>
void main()
{
	char p[50],ch;
	int hno=0,rem,i=0,j=0;
	clrscr();
	printf("\n Enter a Hex Decimal Number: ");
	scanf("%d",&hno);
	while(hno>0)
	{
		rem=hno%16;
		if(rem<10)
			ch=(char)(48+rem);
		else
			ch=(char)(55+rem);
		p[j++]=ch;
		hno/=16;


	}
	p[j--]='\0';
	while(i<j)
	{
		ch=p[i];
		p[i]=p[j];
		p[j]=ch;
		i++;
		j--;
	}
	printf("\n Hex String: %d ",p);
	getch();
	return;
}