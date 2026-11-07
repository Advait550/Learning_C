#include<stdio.h>
void main()
{
	char ch = 'A';
	char *ptr;
	clrscr();
	ptr = &ch;
	printf("\n %c" , ch);
	printf("\n %u" , &ch);
	printf("\n %c" , *(&ch));
	printf("\n %c" , *ptr);
	*ptr = *ptr + 32;
	printf("\n %c" , *ptr);
	printf("\n %u" , ptr);
	printf("\n %u" , &ptr);
	getch();
}