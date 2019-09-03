#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 10

int rear=0,front=0,A[max];

int isFull()
{
    if((rear+1)%max == front)
	return 1;
    else
	return 0;
}

int isEmpty()
{
    if(front == rear)
	return 1;
    else
	return 0;
}

void Enqueue(int x)
{
    if(isFull() == 1)
	printf("\n Queue is FULL");
    else
    {
	A[rear] = x;
	rear = (rear+1)%max;
    }
}

void Dequeue()
{
    if(isEmpty() == 1)
	printf("\n Queue is EMPTY");
    else
	front = (front+1)%max;
}

void Display()
{
    if(isFull() == 1)
    {
	printf("\n Queue is FULL");
	for(int i=front;i!=rear;)
	{
	    printf("  %d",A[i]);
	    i=((i+1)%max);
	}
    }
    else if(isEmpty() == 1)
    {
	printf("\n Queue is EMPTY");
	for(int i=front;i!=rear;)
	{
	    printf("  %d",A[i]);
	    i=((i+1)%max);
	}
    }
    else
    {
	for(int i=front;i!=rear;)
	{
	    printf("  %d",A[i]);
	    i=((i+1)%max);
	}
    }
}

int main()
{
    int select,number;
    clrscr();

    for(;;)
    {
	printf("\n Select any option :");
	printf("\n [1] INSERT \n [2] DELETE \n [3] DISPLAY \n [4] EXIT \n");

	scanf("%d",&select);

	switch(select)
	{
	    case 1: printf("\n Enter the number to be entered :");
		    scanf("%d",&number);
		    Enqueue(number);
		    break;

	    case 2: Dequeue();
		    break;

	    case 3: Display();
		    break;

	    case 4: return 0;
		    break;
	}
    }
    getch();
    return 0;
}