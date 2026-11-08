#include<stdio.h>
void main()
{
	int A[100] , i = 0 , j = 0 , tmp , n , cnt = 0;
	clrscr();
	printf("\n Enter Number Of Elements In Array : ");
	scanf("%d" , &n);
	printf("\n Enter Array Data :\n");
	for(i = 0 ; i < n ; i++)
		scanf("%d" , &A[i]);
	printf("\n Inputted Data Is : ");
	for(i = 0 ; i < n ; i++)
		printf("%4d" , A[i]);
	for(i = 1 ; i < n ; i++)
	{
		if(A[i] < A[i - 1])
			break;
		cnt++;
	}
	if(cnt == n - 1)
		printf("\n Inputted Data is Already In Sorted Manner.");
	else
	{
		for(i = 0 ; i < n-1 ; i++)
		{
			for(j = 0 ; j < n-i-1 ; j++)
			{
				if(A[j] > A[j+1])
				{
					tmp = A[j];
					A[j] = A[j+1];
					A[j+1] = tmp;
				}
			}
		}
		printf("\n Data After Sorting : ");
		for(i = 0 ; i < n ; i++)
			printf("%4d" , A[i]);
	}
	getch();
	return;
}