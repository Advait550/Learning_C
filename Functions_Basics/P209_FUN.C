#include<stdio.h>
void main()
{
	int isprimesuperprime();
	clrscr();
	switch(isprimesuperprime())
	{
		case 0:
			printf("\n Inputted No is Neither Prime Nor Superprime.");
		       break;
		case 1:
			printf("\n Prime.");
			break;
		case 2:
			printf("\n Superprime.");
			break;
	}
	getch();
}
int isprimesuperprime()
{
	int n , dig , i = 2;
	printf("\n Enter a Number: ");
	scanf("%d" , &n);
	while(i < n)
	{
		if(n % i == 0)
			break;
		i++;
	}
		if(i != n)
			return 0;
		while(n > 0)
		{
			dig = n % 10;
			if(dig == 2 || dig == 3 || dig == 5 || dig == 7)
				n /= 10;
			else
				break;
		}
		if(n == 0)
			return 2;
		else
			return 1;

}