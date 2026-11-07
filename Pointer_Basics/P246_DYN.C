#include<stdio.h>
void main()
{
	int i = 0 , *ptr , n;
	clrscr();
	printf("\n Information Count : ");
	scanf("%d" , &n);
	ptr = (int*)malloc(n*sizeof(int));
	printf("\n Enter Data : \n");
	while(i < n)
	{
		scanf("%d" , (ptr + i));
		i++;
	}
	printf("\n Information : ");
	for(i = 0 ; i < n ; i++)
		printf("%4d" , *(ptr + i));
	free(ptr);
	getch();
}