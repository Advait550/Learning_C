#include<stdio.h>
void main()
{
	char a[100],b[100];
	int i=0;
	clrscr();
	printf("\n Enter a String: ");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]>=97&&a[i]<=122)
			b[i]=a[i]-32;
		else
			b[i]=a[i];
		i++;
	}

	puts(b);
	getch();
	return;
}