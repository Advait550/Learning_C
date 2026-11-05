#include<stdio.h>
void main()
{
	int dno,rem,i=0,j=0;
	char p[40],ch;
	clrscr();
	printf("\n Enter A Decimal Number: ");
	scanf("%d",&dno);
	while(dno>0)
	{
		rem=dno%8;
		ch=(char)(rem+48);
		p[j]=ch;
		dno/=8;
		j++;
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
	printf("\n Octal String: %s",p);
	getch();
	return;
}