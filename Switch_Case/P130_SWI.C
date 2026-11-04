#include<stdio.h>
void main()
{
	int opt,no,tmp,i,res,flg=0;
	clrscr();
	while(1)
	{
		printf("\nMenu\n 1.Enter No\n 2.Odd Even\n 3.Digit Sum\n 4.Rev No\n 5.Palindrome\n 6.Table\n 7.prime\n 8.Exit\n Option: ");
		scanf("%d",&opt);
		if(opt>7)
			break;
		switch(opt)
		{
			case 1:
				printf("\n Enter a Number: ");
				scanf("%d",&no);
				flg=1;
				break;
			default:
				if(flg==0)
				{
					printf("\n Invalid Data");
					continue;
				}
				switch(opt)
				{
					case 2:
						if(no%2==0)
							printf("\n Even No");
						else
							printf("\n Odd No");
						break;
					case 6:
						printf("\n Table\n");
						for(i=1;i<=10;i++)
							printf("\n%d",no*i);
						break;
					case 7:
						for(i=2;i<no;i++)
						{
							if(no%i==0)
								break;
						}
						if(i==no)
							printf("\n Prime");
						else
							printf("\n Not Prime");
						break;
					case 3:
						res=0;tmp=no;
						while(tmp>0)
						{
							res+=tmp%10;
							tmp/=10;
						}
						printf("\n Digit Sum: %d",res);
						break;
					case 4:
					case 5:
						res=0;tmp=no;
						while(tmp>0)
						{
							res=res*10+(tmp%10);
							tmp/=10;
						}
						if(opt==4)
							printf("\n Reverse: %d",res);
						else
						{
							if(no==res)
								printf("\n Palindrome");
							else
								printf("\n Not Palindrome");
							break;

						}
				}
		}
	}
}