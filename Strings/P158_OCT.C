#include<stdio.h>
void main()
{
	char p[100];
	int i=0;
	printf("\n String: ");
	gets(p);
	while(p[i]!='\0')
	{
		if(p[i]>='0'&&p[i]<='7')
			i++;
		else
			break;
	}
	if(p[i]!='\0')
		printf("\n Not Octal");
	else
		printf("\n Octal");
	getch();
	return;
}