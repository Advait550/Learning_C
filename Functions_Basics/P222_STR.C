#include<stdio.h>
void main()
{
	char p[20];
	int Ishex(char []);
	clrscr();
	printf("\n Enter a String: ");
	gets(p);
	if(Ishex(p) == 0)
		printf("\n Not");
	printf(" Hex.");
	getch();
}
int Ishex(char p[])
{
	int i = 0;
	while(p[i] != '\0')
	{
		if((p[i] >= '0' && p[i] <= '9') || (p[i] >= 'A' && p[i] <= 'F'))
			i++;
		else
			break;
	}
	if(p[i] == '\0')
		return 1;
	else
		return 0;
}