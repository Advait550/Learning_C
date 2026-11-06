#include<stdio.h>
void main()
{
	int Isprime();
	clrscr();
	if(Isprime())
		printf("\n Inputted Number Is Prime.");
	else
		printf("\n Inputted Number Is Not Prime.");
	getch();
}
int Isprime()
{
	int n , i = 2;
	printf("\n Enter a Number: ");
	scanf("%d" , &n);
	while(i < n)
	{
		if(n % i == 0)
			break;
		i++;
	}
	if(i == n)
		return 1;
	else
		return 0;
}