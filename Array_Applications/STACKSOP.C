#include<stdio.h>

void push();
void pop();
void peek();
void isfull();
void isempty();
void display();
void destroy();

void main()
{
	int s[5],t=-1,x;
	clrscr();


	while(1)
	{

		printf("\n 0.Exit\n 1.Push\n 2.pop\n 3.Peek\n 4.Is Stack Full\n 5.Is Stack Empty\n 6.Display Stack\n 7.Destroy Stack\n");
		printf("\n Enter Choice: ");
		scanf("%d",&x);
		if(x==0)
			break;
		switch(x)
		{
			case 1:
				push(t,s[5]);
				if(t<4)
					t++;
				break;
			case 2:
				pop(t,s[5]);t--;break;
			case 3:
				peek(t,s[5]);break;
			case 4:
				isfull(t,s[5]);break;
			case 5:
				isempty(t,s[5]);break;
			case 6:
				display(t,s[5]);break;
			case 7:
				destroy(t,s[5]);t=-1;break;
		}
	}
		getch();

}

void push(int t,int s[5])
{
	int x,i;
	if(t==4)
	{
		printf("\n The Stack is Full / Overflow.");
		return;
	}
	printf("\n Enter Element to be Inserted : ");
	scanf("%d",&x);

	t++;
	s[t]=x;

	for(i=t;i>=0;i--)
	{
		printf("\n %d",s[i]);
	}
}

void pop(int t,int s[5])
{
	int i;
	if(t==-1)
	{
		printf("\n Stack is Empty / Underflow.");
		return;
	}
	printf("\n Removed Element : %d",s[t]);
	t--;
	for(i=t;i>=0;i--)
		printf("\n %d",s[i]);
}

void peek(int t, int s[5])
{
	if(t==-1)
	{
		printf("\n Stack is Empty.");
		return;
	}
	printf("\n Element At Top of Stack is: %d",s[t]);
	printf("\n %d Elements Can be Added/Inserted.",4-t);
}

void isfull(int t,int s[5])
{
	if(t==4)
	{
		printf("\n The Stack is Full.");
		return;
	}
	printf("\n Stack is Not Full.");
	printf("\n %d Elements Can be Inserted/Added.",4-t);

}

void isempty(int t,int s[5])
{
	if(t==-1)
		printf("\n Stack is Empty.");
	else
		printf("\n Stack is Not Totally Empty.");
		printf("\n Stack has %d Elements.",t+1);
}

void display(int t,int s[5])
{
	int i=t;
	if(t==-1)
	{
		printf("\n Stack Is Empty.");
		return;
	}
	while(i>=0)
	{
		printf("\n %d",s[i]);
		i--;
	}
}

void destroy(int t,int s[5])
{
	int i=t;
	if(t==-1)
	{
		printf("\n The Stack is Empty.");
		return;
	}
	printf("\n The Stack Has Been Destroyed Successfully.");
}
