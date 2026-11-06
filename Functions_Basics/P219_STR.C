#include<stdio.h>
void main()
{
	char p[20];
	int Isbinary(char []);
	clrscr();
	printf("\n Enter a String: ");
	scanf("%s" , p);
	if(Isbinary(p) == 0)
		printf("\n Inputted String Is Not Binary.");
	else
		printf("\n Inputted String Is Binary.");
	getch();
}

int Isbinary(char p[])
{
	int i = 0;
	while(p[i] != '\0')
	{
		if(p[i] == '0' || p[i] == '1')
			i++;
		else
			break;
	}
	if(p[i] == '\0')
		return 1;
	else
		return 0;
}