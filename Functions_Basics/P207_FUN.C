#include<stdio.h>
void main()
{
	int Ispalindrome();
	clrscr();
	if(Ispalindrome())
		printf("\n Inputted String Is Palindrome.");
	else
		printf("\n Inputted String Is Not Palindrome.");
	getch();
}
int Ispalindrome()
{
	char p[20];
	int i = 0 , j;
	printf("\n Enter a String: ");
	scanf("%s" , p);
	j = strlen(p) - 1;
	while(i < j)
	{
		if(p[i] == p[j])    {
			i++;
			j--;         }
		else
			break;
	}
	if(i >= j)
		return 1;
	else
		return 0;
}