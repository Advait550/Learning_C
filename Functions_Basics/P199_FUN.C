#include<stdio.h>
void main()
{
	void binary();
	clrscr();
	binary();
	getch();
}
void binary()
{
	int i = 0 ;
	char p[20];
	printf("\n Enter String: ");
	scanf("%s" , p);
	while(p[i] != '\0')
	{
		if(p[i] == '0' || p[i] == '1')
			i++;
		else
			break;
	}
	if(p[i] == '\0')
		printf("\n String Is Binary.");
	else
		printf("\n String IS Not Binary.");
}