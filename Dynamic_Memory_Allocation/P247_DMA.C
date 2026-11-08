#include<stdio.h>
void main()
{
	int n;
	char a[50] , *b;
	clrscr();
	printf("\n Enter a String : ");
	gets(a);
	n = strlen(a) + 1;
	b = (char*)malloc(n * sizeof(char));
	strcpy(b , a);
	puts(a);
	puts(b);
	free(b);
	getch();
}