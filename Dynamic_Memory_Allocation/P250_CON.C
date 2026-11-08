#include<stdio.h>
void main()
{
	char a[20] , b[20] , *c;
	int i = 0 , n;
	printf("\n Enter String 1 : ");
	gets(a);
	printf("\n Emter String 2 : ");
	gets(b);
	n = strlen(a) + strlen(b) + 1;
	c = (char*)malloc(n * sizeof(char));
	strcpy(c , a);
	strcpy(c , b);
	puts(a);
	puts(b);
	puts(c);
	free(c);
	getch();
}
