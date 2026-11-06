#include<stdio.h>
#include"MYFUN1.H"
void main()
{
	int no , opt , res;
	long int lres;
	clrscr();
	while(1)
	{
		printf("\n Menu \n1.Enter No \n2.Table \n3.DigitSum \n4.Length \n5.Prime \n6.Reverse No \n7.Palindrome \n8.Factorial \n9.Exit \n OPTION: ");
		scanf("%d" , &opt);
		if(opt > 8)
			break;
		switch(opt)
		{
			case 1:
				printf("\n Enter a Number: ");
				scanf("%d" , &no);
				break;
			case 2:
				Table(no);
				break;
			case 3:
				printf("\n Digit Sum: %d" ,Digsum(no));
				break;
			case 4:
				printf("\n Length: %d" , Length(no));
				break;
			case 5:
				if(Isprime(no) == 0);
					printf("\n Not");
				printf("Prime.");
				break;
			case 6:
				printf("\n Reverse No: %d" , Rno(no));
				break;
			case 7:
				lres = Rno(no);
				if(lres != no)
					printf("\n Not");
				printf("Palindrome.");
				break;
			case 8:
				printf("\n Factorials: %d" , Fact(no));
		}
	}
	getch();
}