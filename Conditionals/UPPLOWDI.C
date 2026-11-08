#include<stdio.h>
void main()
{
	char a;
	clrscr();
	printf("\n Enter a Character: ");
	scanf("%c",&a);
	printf("\n %c is %s",a,((a>='A'&&a<='Z')?"Uppercase"
			       :((a>='a'&&a<='z')?"Lowercase"
			       :((a>='0'&&a<='9')?"Digit":"Other"))));
	getch();
	return;
}