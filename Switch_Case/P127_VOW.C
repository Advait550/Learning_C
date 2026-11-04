#include<stdio.h>
void main()
{
	int i=1,ma=0,me=0,mi=0,mo=0,mu=0,oth=0;
	char ch;
	clrscr();
	while(i<=10)
	{
		printf("\n Enter a Character: ");
		flushall();
		scanf("%c",&ch);
		switch(ch)
		{
			case 65:
			case 'a':
				ma++;break;
			case 'E':
			case 'e':
				me++;break;
			case 'I':
			case 'i':
				mi++;break;
			case 'O':
			case 'o':
				mo++;break;
			case 'U':
			case 'u':
				mu++;break;
			default:
				oth++;
		}
		i++;
	}
	printf("\n A: %d \n E: %d \n I: %d \n O: %d \n U: %d \n Other: %d",ma,me,mi,mo,mu,oth);
	getch();
	return;
}