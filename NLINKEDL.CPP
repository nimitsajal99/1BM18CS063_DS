#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
{
	int number;
	struct node *next;
}Node;

void display(Node* head)
{
	Node *save;
	save=head;
	while(save!=NULL)
	{
		printf("%d -> ",save->number);
		save=save->next;
	}
}

Node* insertF(Node* head)
{
	Node* temp;
	temp = (Node*)malloc(sizeof(Node*));

	//int x=50;

	temp->number=50;

	temp->next=head;
	head=temp;

	return head;
}

Node* insertE(Node* head)
{
	Node* temp, * save;
	temp = (Node*)malloc(sizeof(Node*));

	//int x=100;

	temp->number=100;
	temp->next=NULL;
	save=head;

	while(save->next!=NULL)
	{
		save=save->next;
	}
	save->next=temp;
	return head;
}

int main()
{
	struct node *head =NULL;
	int i;
	clrscr();
	for(;;)
	{
		printf("\n Select any option :");
		printf("\n [1] Insert at Front \n [2] Insert at End \n [3] Display [4] Exit \n");
		scanf("%d",&i);

		if(i==1)
			head=insertF(head);
		else if(i==2)
			head=insertE(head);
		else if(i==3)
			display(head);
		else
			return 0;

	}
	getch();
	return 0;

}

