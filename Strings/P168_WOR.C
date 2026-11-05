#include<stdio.h>
void main()
{
	char a[100];
	int i=0,sp=0;
	clrscr();
	printf("\n Enter String:  ");
	gets(a);
	while(1)
	{
		if(a[i]==32||a[i]=='\0')
		{
			printf("\n %d",sp);
			if(a[i]=='\0')
				break;
			sp=i+1;
		}
		i++;
	}
	getch();
	return;
}