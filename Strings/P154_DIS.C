#include<stdio.h>
void main()
{
	char a[50],i=0;
	clrscr();
	printf("\n String:  ");
	gets(a);
	printf("\n String\n");
	while(a[i]!='\0')
	{
		printf("%c",a[i]);
		i++;
	}
	getch();
	return;
}