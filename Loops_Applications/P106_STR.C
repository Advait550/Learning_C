#include<stdio.h>
void main()
{
	//Strong No means sum of fact of each dig= OG Number


	long int f;
	int no,dig,tot=0,tmp;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	for(tmp=no;no>0;no/=10)
	{
		dig=no%10;
		for(f=dig;dig>2;dig--)
			f=f*(dig-1);     //Fact are Calculated i.e. f*f-1*...
		tot+=f;            //This statement is out of Loop.
	}
	if(tmp!=tot)
		printf("\n Inputted Number is not a Strong Number.");
	else
		printf("\n Inputted Number is a Strong Number.");
	getch();
	return;

}