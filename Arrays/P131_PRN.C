#include<stdio.h>
void main()
{
	int i=0,x[5];
	clrscr();
	while(i<5)
	{
		printf("\n Enter a Number: ");
		scanf("%d",&x[i]);
		i++;
	}
	printf("\n Data \n");
	for(i=0;i<5;i++)

		printf("%4d",x[i]);

	getch();
	return;
}