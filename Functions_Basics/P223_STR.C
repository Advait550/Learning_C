#include<stdio.h>
void main()
{
	char p[20];
	int Ispalindrome(char []);
	clrscr();
	printf("\n Enter a String: ");
	gets(p);
	if(Ispalindrome(p) == 0)
		printf("\n Not");
	printf(" Palindrome");
	getch();
}
int Ispalindrome(char p[])
{
	int i = 0 , j = strlen(p) - 1;
	while(i < j)
	{
		if(p[i] != p[j])
			break;
		else
		{
			i++;
			j--;
		}
	}
	return (i >= j);
}