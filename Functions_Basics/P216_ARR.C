#include<stdio.h>
#include"array1.h"
void main()
{
	int A[5] , opt , res , sv , i = 0 , pos;
	clrscr();
	while(1)
	{
		printf("\nMenu\n 1.Input\n 2.Output\n 3.Sum\n 4.Average\n 5.Max Pos\n 6.Min Pos\n 7.Is Ordered\n 8.Search\n 9.Exit\n Option: ");
		scanf("%d" , &opt);
		if(opt > 8)
			break;
		switch(opt)
		{
			case 1:
				printf("\n Enter Array Data: ");
				for(i = 0 ; i < 5 ; i++)
					scanf("%d" , &A[i]);
				break;
			case 2:
				Display(A , 5);
				break;
			case 3:
				printf("\n Sum: %d" , Total(A , 5));
				break;
			case 4:
				printf("\n Average: %d" , Average(A , 5));
				break;
			case 5:
				pos = Maxpos(A , 5);
				printf("\n Max Pos: %d" , pos);
				printf("\n Element At Max Pos: %d" , A[pos]);
				break;
			case 6:
				pos = Minpos(A , 5);
				printf("\n Min Pos: %d" , pos);
				printf("\n Element At Min Pos: %d" , A[pos]);
				break;
			case 7:
				if(Isordered(A , 5) == 0)
					printf("\n Not");
				printf(" Ordered");
				break;
			case 8:
				printf("\n Enter Search Value: ");
				scanf("%d" , &sv);
				if(Isordered(A , 5) == 0)
					res = Seqsearch(A , 5 , sv);
				else
					res = Binsearch(A , 5 , sv);
				if(res == 0)
					printf("\n Not Found.");
				else
					printf("\n Found.");
		}
	}
	getch();
}