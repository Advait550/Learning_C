#include<stdio.h>
void Enqueue();
void Dequeue();
void Display();
int F = -1 , R = -1 , m , Q[100];

void main()
{
      int choice;
    
      printf("\n Enter Maxsize of Queue: ");
      scanf("%d",&m);

      while(1)
      {
	  printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit \n Enter Choice: ");
	  scanf("%d" , &choice);
	  if(choice == 4)
		break;
	  switch(choice)
	  {
		case 1:
			Enqueue();break;
		case 2:
			Dequeue();break;
		case 3:
			Display();break;
		default:
			printf("\n Invalid Choice.");
	  }

      }
      getch();
}

void Enqueue()
{
	int x;
	if(R == m-1)
	{
		printf("\n Queue is Full / Overflow.");
		return;
	}
	printf("\n Enter Element to be Inserted: ");
	scanf("%d",&x);
	if(F == -1)
	{
		F = 0;
		R = 0;
		Q[R] = x;
	}
	else
	{
		R = R+1;
		Q[R] = x;
	}
}


void Dequeue()
{
	if(F == -1)
	{
		printf("\n Queue is Empty / Underflow.");
		return;
	}
	if(F == R)
	{
		printf("\n Deleted Item is:  %d",Q[F]);
		F = -1;
		R = -1;
	}
	else
	{
		printf("\n Deleted Item is:  %d",Q[F]);
		F++;
	}
}

void Display()
{
	int i = F;
	if(F == -1)
	{
		printf("\n Queue is Empty / Underflow.");
		return;
	}
	for(i = F ; i <= R ; i++)
		printf("%4d" , Q[i]);
}
