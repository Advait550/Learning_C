#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char t[20] , *ptr;
	char *p[5];
	int i , j , pos , n;
	printf("\n Enter String : \n");
	for(i = 0 ; i < 5 ; i++)
	{
		gets(t);
		n = strlen(t) + 1;
		*(p + i) = (char*)malloc(n * sizeof(char));
		strcpy(*(p + i) , t);
	}
	
	printf("\n Before Sorting : \n");
	for(i = 0 ; i < 5 ; i++)
	{
		puts(*(p + i));
	}
	
	for(i = 0 ; i < 4 ; i++)
	{
		pos = i;
		for(j = i + 1 ; ; j++)
		{
			if(strcmp(p[j] , p[pos]))
				pos = j;
		}
		if(i != pos)
		{
			ptr = p[i];
			p[i] = p[pos];
			p[pos] = ptr;
		}
		
	}
	printf("\n After Sorting : \n");
	for(i = 0 ; i < 5 ; i++)
	{
		puts(p[i]);
		free(p[i]);
	}
	return;
}
