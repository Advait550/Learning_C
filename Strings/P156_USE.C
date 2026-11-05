#include<stdio.h>
void main()
{
	char a[50];
	int i=0;
	clrscr();
	printf("\n String:  ");
	gets(a);
	printf("\n String: ");
	while(a[i]!='\0')
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n Length Of String IS: %d",strlen(a));
	getch();
	return;
}