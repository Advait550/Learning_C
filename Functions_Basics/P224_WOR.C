#include<stdio.h>
void main()
{
	char p[20];
	int Wordcnt(char []);
	clrscr();
	printf("\n Enter a String: ");
	gets(p);
	printf("\n No Of Words: %d" , Wordcnt(p));
	getch();
}
int Wordcnt(char p[])
{
	int i = 0 , cnt = 0;
	while(p[i] != '\0')
	{
		if(p[i] == ' ')
			cnt++;
		i++;
	}
	return cnt + 1;
}