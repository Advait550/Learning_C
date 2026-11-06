#include<stdio.h>
void main()
{
	char p[20];
	int Isoctal(char []);
	clrscr();
	printf("\n Enter a String: ");
	gets(p);
	if(Isoctal(p) == 0)
		printf("\n Inputted String Is Not Octal.");
	else
		printf("\n Inputted String Is Octal. ");
	getch();
}
int Isoctal(char p[])
{
	int i = 0;
	while(p[i] != '\0')
	{
		if(p[i] >= '0'  && p[i] <= '7')
			i++;
		else
			break;
	}
	if(p[i] == '\0')
		return 1;
	else
		return 0;
}