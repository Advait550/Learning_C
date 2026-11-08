#include<stdio.h>
int Length(int a)
{
	int len = 0;
	while(a > 0)
	{
		a /= 10;
		len++;
	}
	return len;
}

// Function to Compute Digit Sum
int Digsum(int a)
{
	int sum = 0;
	while(a > 0)
	{
		sum += a % 10;
		a /= 10;
	}
	return sum;
}

// Function to Generate Reverse Number
int Rno(int a)
{
	int rev = 0;
	while(a > 0)
	{
		rev = rev * 10 + (a % 10);
		a /= 10;
	}
	return rev;
}

//Function to Display Table
void Table(int a)
{
	int i;
	for(i = 1 ; i <= 10 ; i++)
		printf("%4d" , a * i);
}

// Function To Calculate Factorial
int Fact(int a)
{
	int fact = 1;
	while(a > 0)
	{
		fact *= a--;
	}
	return fact;
}

//Functon to Check Number Is Prime
int Isprime(int a)
{
	int i = 2 ;
	while(i < a)
	{
		if(a % i == 0)
			break;
		i++;
	}
	return (i == a);
}