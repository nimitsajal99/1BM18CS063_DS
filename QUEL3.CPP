#include<stdio.h>
#include<conio.h>
#include<process.h>

int const max = 5;



int isFull(int rear)
{
	if(rear==max)
		return 1;
	else
		return 0;
}

int isEmpty(int rear, int front)
{
	if(rear==-1 && front==0)
		return 1;
	else
		return 0;
}

void Enqueue(int x, int *rear, int A[5])
{
	if(isFull(*rear)==1)
		printf("\n Full !");
	else
	{
		*rear = *rear + 1;
		A[*rear]=x;
	}
}

void Dequeue(int *front, int *rear, int A[5])
{
	if(isEmpty(*rear,*front)==1)
		printf("\n Empty !");
	else if(*front==*rear)
	{
		*front=-1;
		*rear=-1;
	}
	else
		*front+=1;
}

void Display(int front, int rear, int A[5])
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("\t%d",A[i]);
	}
}


int main()
{       int front=0;
	int rear=-1;
	int A[5];
	int select, number;
	clrscr();

	printf("\n\t** QUEUE **\n");

	for(;;)
	{
	printf("\n Select any option :");

	printf("\n [1] INSERT \n [2] DELETE \n [3] DISPLAY \n EXIT \n ");
	scanf("%d",&select);

	switch(select)
	{
		case 1: printf("\n Enter the number you want to enter :");
			scanf("%d",&number);
			Enqueue(number, &rear, A);
			break;

		case 2: Dequeue(&front,&rear,A);
			break;

		case 3: Display(front,rear,A);
			break;

		case 4: return 0;
	}
	}

	getch();
}

