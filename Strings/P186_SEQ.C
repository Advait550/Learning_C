#include<stdio.h>
void main()
{
	char p[5][15],q[15];
	int i=0;
	clrscr();
	printf("\n Enter City Names:\n");
	while(i<5)
	{
		gets(p[i]);
		i++;
	}
	printf("\n Enter City Name To Search: ");
	gets(q);
	for(i=0;i<5;i++)
	{
		if(strcmp(p[i],q)==0)
			break;

	}
	if(i==5)
		printf("\n Not Found");
	else
		printf("\n Found.");

	getch();
	return;
}