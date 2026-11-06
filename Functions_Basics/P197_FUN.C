#include<stdio.h>
void main()
{
	void array();
	clrscr();
	array();
	getch();
}
void array()
{
	int A[5] , i;
	printf("\n Enter Array Data: \n");
	for(i = 0 ; i < 5 ; i++)
		scanf("%d" , &A[i]);
	for(i = 1 ; i < 5 ; i++)
	{
		if(A[i] < A[i - 1])
			break;
	}
	if(i == 5)
		printf("\n Entered Array Is In Ascending Order.");
	else
		printf("\n Entered Array Is Not In Ascending Ordered.");
	return;
}