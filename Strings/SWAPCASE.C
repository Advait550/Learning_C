#include<stdio.h>
void main()
{
	char a[100];
	int i=0;
	clrscr();
	printf("\n Enter a String: ");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]>=65&&a[i]<=90)
			a[i]=a[i]+32;
		else
		{
			if(a[i]>=97&&a[i]<=122)
				a[i]=a[i]-32;
		}
		i++;
	}
	puts(a);
	getch();
	return;
}