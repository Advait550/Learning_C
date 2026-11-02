#include<stdio.h>
void main()
{
	int i=1;
	clrscr();
	while(i<=10)
	{
		if(i%2==1)
			printf("\n Namaste");
		else
			printf("\n Anushka");
		i++;
	}
	getch();
	return;
}