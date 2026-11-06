#include<stdio.h>
void main()
{
	int oddeven() , i , cnt = 0;
	clrscr();
	for(i = 0 ; i < 10 ; i++)
	{
		if(oddeven())
			cnt++;
	}
	printf("\n odd : %d \n Even : %d" , cnt , 10 - cnt);
	getch();
}
int oddeven()
{
	int n;
	printf("\n Enter a Number: ");
	scanf("%d" , &n);
	return n % 2;
}