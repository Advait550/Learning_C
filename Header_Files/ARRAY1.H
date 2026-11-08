#include<stdio.h>

//Function to Display Array Data
void Display(int A[] , int n)
{
	int i = 0;
	while(i < n)
	{
		printf("%4d" , A[i]);
		i++;
	}
}

// Function to Compute Sum
int Total(int A[] , int n)
{
	int total = 0 , i = 0;
	while(i < n)
	{
		total += A[i++];
	}
	return total;
}

// Function to Compute Average
int Average(int A[] , int n)
{
	return Total(A , n) / n;
}

// Function to find Out Maximum Data Position
int Maxpos(int A[] , int n)
{
	int i = 1 , pos = 0;
	while(i < n)
	{
		if(A[i] > A[pos])
			pos = i;
		i++;
	}
	return pos;
}

// Function to Find Out Minimum Data Position
int Minpos(int A[] , int n)
{
	int i = 1 , pos = 0;
	while(i < n)
	{
		if(A[i] < A[pos])
			pos = i;
		i++;
	}
	return pos;
}

// Function to Check Whether Array Data Is in Ascending Order or Not
int Isordered(int A[] , int n)
{
	int i = 1;
	while(i < n)
	{
		if(A[i] < A[i - 1])
			break;
		i++;
	}
	return (i == n);
}

//Function to Implement Sequencial Search
int Seqsearch(int A[] , int n , int sv)
{
	int i = 0;
	while(i < n)
	{
		if(A[i] == sv)
			break;
		i++;
	}
	if(i == n)
		return 0;
	else
		return 1;
}

// Function to Implement Binary Search
int Binsearch(int A[] , int n , int sv)
{
	int l = 0 , r = n - 1 , mid;
	do
	{
		mid = (l + r) / 2;
		if(A[mid] == sv)
			break;
		if(A[mid] > sv)
			r = mid - 1;
		else
			l = mid + 1;
	}while(l <= r);
	if(l <= r)
		return 1;
	else
		return 1;
}