#include<stdio.h>
void main()
{
	int x,rev=0,tmp,dig;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&x);
	tmp=x;
	while(x>0)
	{
		dig=x%10;
		rev=rev*10+dig;
		x/=10;
	}
	if(rev==tmp)
		printf("\n Inputted No is Palindrome.");
	else
		printf("\n Inputted No is Not Palindrome.");
	getch();
	return;
}