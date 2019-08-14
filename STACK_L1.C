#include<stdio.h>
#include<conio.h>
#include<process.h>

int Max=10, Top=-1, arr[10], a;

int IsFull()				//IS FULL FUNCTION
{
	if(Top==Max)
		return 1;
	else
		return 0;
}

int IsEmpty()				//IS EMPTY FUNCTION
{
	if(Top==-1)
		return 1;
	else
		return 0;
}


void Push(int a)		//PUSH FUNCTION
{
	if(IsFull==1)
		printf("\n Stack Overflow");
	else
	{
		Top++;
		arr[Top]=a;
	}
}

void Pop()			//POP FUNCTION
{

	if(IsEmpty==1)
		printf("\n Stack Underflow");
	else
	{
		printf("\n Popped value = %d",arr[Top]);
		Top--;
	}

}

void Display()			//DISPLAY FUNCTION
{
	int i;
	if(Top==-1)
		printf("\n Stack Underflow");
	else
	{
		for(i=Top;i>=0;i--)
			printf("\n %d",arr[i]);
	}
}
int main()
{
	int j, s, n;
	char d;
	clrscr();

	for(;;)
	{
		printf("\n Select the Operation :");
		printf("\n\n [1] Push\n [2] Pop\n [3] Display\n [4] EXIT\n");
		scanf("%d",&s);

		switch(s)
		{
			case 1: printf("\n Enter the value :");		//PUSH
				scanf("%d",&n);
				Push(n);
				break;

			case 2: Pop();           			//POP
				break;

			case 3: Display();                   	        //DISPLAY
				break;

			case 4: exit(0);				//EXIT

			default:printf("\n Wrong input :");
				break;
		}
	}

	getch();
	return 0;
}


