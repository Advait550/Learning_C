#include<stdio.h>
void main()
{
	int cnt=0,no,i=1;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	while(i<=no)
	{
		if(no%i==0)
			cnt++;
		i++;
	}
	printf("\n %d is Divisible %d times.",no,cnt);
	getch();
	return;
}