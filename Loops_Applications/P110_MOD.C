#include<stdio.h>
void main()
{
	int no,cnt=2,i=2;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
			cnt++;
		i++;
	}
	printf("%d is Divisible %d Times.",no,cnt);
	getch();
	return;
}