#include<stdio.h>
void main()
{
	char a[50];
	int i=0;
	clrscr();
	printf("\n String: ");
	gets(a);
	while(a[i]!='\0')
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n String Length: %d",i);
	getch();
	return;
}