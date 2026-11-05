#include<stdio.h>
void main()
{
	int dno,rem,i=0,j=0;
	char p[40],ch;
	clrscr();

	printf("\n Enter Decimal Number: ");
	scanf("%d",&dno);
	while(dno>0)
	{
		rem=dno%2;
		ch=(char)(rem+48);
		p[j]=ch;
		dno/=2;
		j++;
	}
	p[j--]='\0';
	while(i<j)
	{
		ch=p[j];
		p[i]=p[j];
		p[j]=ch;
		i++;
		j--;
	}
	printf("\n Binary String is %s",p);
	getch();
	return;
}