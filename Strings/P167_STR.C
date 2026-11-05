#include<stdio.h>
void main()
{
	char a[100],b[100];
	int i=0,j;
	clrscr();
	printf("\n Enter String: ");
	gets(a);
	j=strlen(a);
	for(b[j--]!='\0';j>=0;j--,i++)
		b[j]=a[i];
	puts(a);
	puts(b);
	getch();
	return;
}