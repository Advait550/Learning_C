#include<stdio.h>
struct student
{

	char Name[100];
	int r;
	int prn;
	int sem;
	float cgpa;
	int year;
}a[100];
int n;

void display();
void read();

void main()
{

	clrscr();

	printf("\n Enter Number Of Students: ");
	scanf("%d",&n);
	read();
	display();
	getch();
}

void read()
{
	int i = 1;
	for(i=1;i<=n;i++)
	{
		printf("\n Enter PRN Of Student %d : ",i);
		scanf("%d",a[i].prn);

		printf("\n Enter Name Of Student %d : ",i);
		scanf("%s",&a[i].Name);

		printf("\n Enter Semester Of Student %d :  ",i);
		scanf("%d",&a[i].sem);

		printf("\n Enter Year of Student %d : ",i);
		scanf("%d",&a[i].year);

		printf("\n Enter CGPA Of Student %d : ",i);
		scanf("%f",&a[i].cgpa);
	}
}

void display()
{
	int i = 1;
	for(i=1;i<=n;i++)
	{
		printf("\n %d. PRN :  %d",i,a[i].prn);
		printf("\n %d. Name :  %s",i,a[i].Name);
		printf("\n %d Semester : %d",i,a[i].sem);
		printf("\n %d Year : %d",i,a[i].year);
		printf("\n %d CGPA : %f",i,a[i].cgpa);

	}

}