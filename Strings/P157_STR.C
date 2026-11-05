#include<stdio.h>
void main()
{
	char p[100];
	int i=0;
	clrscr();
	printf("\n String: ");
	scanf("%s",p);
	while(p[i]!='\0')
	{
		if(p[i]=='0'||p[i]=='1')
			i++;
		else
			break;
	}
	if(p[i]!='\0')
		printf("\n Not Binary");
	else
		printf("\n Binary");
	getch();
	return;
}