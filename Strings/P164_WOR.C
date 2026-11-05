#include<stdio.h>
void main()
{
	char p[100];
	int i=0,cnt=1;
	clrscr();
	printf("\n String:  ");
	gets(p);
	puts(p);
	while(p[i]!='\0')
	{
		if(p[i]==32&&p[i+1]!=32)
			cnt++;
		i++;
	}
	printf("\n Word Count: %d",cnt);
	getch();
	return;
}