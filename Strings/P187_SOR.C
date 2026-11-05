#include<stdio.h>
void main()
{
	char p[5][15], tmp[15];
	int i=0, j=0, pos=0;
	clrscr();
	printf("\n Enter a String: ");
	for(i=0;i<5;i++)
	{
		gets(p[i]);

	}
	printf("\n Before Sorting:\n");
	for(i=0;i<5;i++)
	{
		puts(p[i]);

	}
	for(i=0;i<4;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(strcmp(p[j],p[pos]<0))
				pos=j;
		}
		if(i!=pos)
		{
			strcpy(tmp,p[i]);
			strcpy(p[i],p[pos]);
			strcpy(p[pos],tmp);
		}
	}
	printf("\n After Sorting:\n");
	for(i=0;i<5;i++)
		puts(p[i]);
	getch();
	return;
}