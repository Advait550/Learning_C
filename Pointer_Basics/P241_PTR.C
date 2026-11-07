#include<stdio.h>
void main()
{
	char k[50];
	int i = 0;
	clrscr();
	printf("\n String : ");
	gets(k);
	printf("\n String : ");
	while(*(k + i) != '\0')
	{
		printf("%c" , *(k + i));
		i++;
	}
	getch();
}