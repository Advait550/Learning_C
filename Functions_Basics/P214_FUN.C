#include<stdio.h>
void main()
{
	int A[5] , i = 0;
	int Sum(int [5] , int) , Avg(int [5] , int);
	void Display(int [5] , int);
	clrscr();
	printf("\n Enter Array Data: \n");
	while(i < 5)
	{
		scanf("%d" , &A[i++]);
	}
	printf("\n Inputted Array: ");
	Display(A , 5);
	printf("\n Sum Is: %d" , Sum(A , 5));
	printf("\n Average Is : %d" , Avg(A , 5));
	getch();
}
void Display(int A[] , int n)
{
	int i = 0;
	while(i < n)
		printf("%4d" , A[i++]);
}
int Sum(int A[] , int n)
{
	int sum = 0 , i;
	for(i = 0 ; i < n ; i++)
	{
		sum += A[i];
	}
	return sum;
}
int Avg(int A[] , int n)
{
	return Sum(A , n) / n;
}
