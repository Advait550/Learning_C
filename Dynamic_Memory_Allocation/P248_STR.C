#include<stdio.h>
void main()
{
	char a[20] , *b;
	int n , i = 0;
	clrscr();
	printf("\n Enter Source String : ");
	gets(a);
	n = strlen(a) + 1;
	b = (char*)malloc(n * sizeof(char));
	while(*(a + i) != '\0')
	{
		*(b + i) = *(a + i);
		i++;
	}
	*(b+i) = *(a+i);
	puts(a);
	puts(b);
	free(b);
	getch();
}