#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char t[20];
	char *p[5];
	int i = 0 , n;
	printf("\n Enter String:  \n");
	for(i = 0 ; i < 5 ; i++)
	{
		gets(t);
		n = strlen(t) + 1;
		*(p + i) = (char*)malloc(n * sizeof(char));
		strcpy(*(p + i) , t);
	}
	printf("\n Data : \n");
	for(i = 0 ; i < 5 ; i++)
		puts(*(p + i));
	for(i = 0 ; i < 5 ; i++)
		free(p[i]);
	return 0;
}
