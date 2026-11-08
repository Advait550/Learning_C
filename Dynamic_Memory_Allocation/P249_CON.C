#include<stdio.h>
void main()
{
	char a[50] , b[50] , *c;
	int n , i = 0 , j = 0;
	clrscr();
	printf("\n String 1 : ");
	gets(a);
	printf("\n String 2 : ");
	gets(b);
	n = strlen(a) + strlen(b) + 1;
	c = (char*)malloc(n * sizeof(char));
	while(*(a + i) != '\0')
	{
		*(c + i) = *(a + i) ;
		i++;
	}
	while(*(b + j) != '\0')
	{
		*(c + i + j) = *(b + j);
		j++;
	}
	*(c + i + j) = *(b + j);
	puts(a);
	puts(b);
	puts(c);
	free(c);
	getch();
}