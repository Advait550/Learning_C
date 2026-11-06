#include<stdio.h>
void main()
{
	char p[20];
	int Isdecimal(char []);
	clrscr();
	printf("\n Enter a String: ");
	gets(p);
	if(Isdecimal(p) == 0)
		printf("\n Not");
	printf("Decimal.");
	getch();
}
int Isdecimal(char p[])
{
	int i = 0;
	while(p[i] != '\0')
	{
		if(p[i] >= '0' && p[i] <= '9')
			i++;
		else
			break;
	}
	if(p[i] == '\0')
		return 1;
	else
		return 0;
}