#include<stdio.h>
void main()
{
	char p[100];
	int i=0;
	clrscr();
	printf("\n String: ");
	gets(p);
	while(p[i]!='\0')
	{
		if((p[i]>='A'&&p[i]<='F')&&(p[i]>='0'&&p[i]<='9'))
			i++;
		else
			break;
	}
	if(p[i]!='\0')
		printf("\n Not Hex");
	else
		printf("\n Hex");
	getch();
	return;
}
