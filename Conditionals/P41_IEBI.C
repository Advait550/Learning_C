 #include<stdio.h>
 void main()
 {
	char x;
	clrscr();
	printf("\n Enter a Character: ");
	scanf("%c",&x);
	if(x=='0'||x=='1')
		printf("\n %c is Binary Character.",x);
	else
		printf("\n %c is Not a Binary Character.",x);
	getch();
	return;
 }