#include<stdio.h>
void main()
{
	char a[100],b[100];
	int i=0,j=0,sp=0;
	clrscr();
	printf("\n Enter a String: ");
	gets(a);
	puts(a);
	while(1)
	{
		if(a[i]==32)
		{
			b[j++]=a[sp];
			b[j++]='.';
			b[j++]=(char)32;
			sp=i+1;
		}
		else
		{
			if(a[i]=='\0')
			{
				while(a[sp]!='\0')
				{
					b[j++]=a[sp];
					sp++;
				}
				b[j]='\0';
				break;
			}
		}
		i++;
	}
	puts(b);
	getch();
	return;
}