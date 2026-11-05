#include<stdio.h>
void main()
{
	int sp=0,ep,len,max=0,i=0;
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
				max=len;
			if(a[i]=='\0')
				break;
			sp=i+1;

		}
		i++;
	 }
	 printf("\n Maximum Word Length Is %d",max);
	 getch();
	 return;
	i++;
}
