#include<stdio.h>
void main()
{
	int sp=0,ep,len,max=0,i=0,ws,we;
	char a[100];
	clrscr();
	printf("\n Enter String:  ");
	gets(a);
	while(1)
	{
		if(a[i]==32||a[i]=='\0')
		{
			ep=i-1;
			len=ep-sp+1;
			if(len>max)
			{
				max=len;
				ws=sp;
				we=ep;
			}
			if(a[i]=='\0')
				break;
			sp=i+1;

		}
		i++;
	}
	printf("\n Max Word Len : %d, Start Pos : %d, End pos : %d ",max,ws,we);
	getch();
	return;
}