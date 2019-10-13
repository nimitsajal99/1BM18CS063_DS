#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>

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

struct node * insertF(struct node * head,int num)
{
	Node *temp = (Node*)malloc(sizeof(Node*));
	Node *save;
	save=head;
	temp->number=num;
	temp->next=save;
	head=temp;

	return head;
}

Node* deleteF(Node* head)
{
	if(head==NULL)
	{
		printf("\n Nothing to delete");
		return head;
	}
	else
	{
		Node *save;

		save=head;
		head=head->next;
		free(save);
		return head;
	}
}

Node* insertE(Node* head,int num)
{
	Node * save;
	Node *temp = (Node*)malloc(sizeof(Node*));
	temp->number=num;
	temp->next=NULL;
	save=head;
	while(save->next!=NULL)
	{
		save=save->next;
	}
	save->next=temp;
	return head;
}

Node* deleteE(Node* head)
{
	if(head==NULL)
	{
		printf("\n Nothing to Delete.");
		return head;
	}
	else
	{
		Node *temp, *save;
		temp=head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		save=temp->next;
		temp->next=NULL;
		free(save);
		return head;
	}
}

Node* insertPos(Node* head,int pos,int num)
{
	int i;
	Node* temp, *save, *saveNext;
	temp = (Node*)malloc(sizeof(Node*));
	temp->number=num;
	save=head;
	saveNext=head;
	for(i=0;i<(pos-2);i++)
	{
		save=save->next;
	}
	saveNext=save->next;
	save->next=temp;
	temp->next=saveNext;
	return head;
}

Node* deletePos(Node* head, int pos)
{
	if(head==NULL)
	{
		printf("\n Nothing to Delete.");
		return head;
	}
	else
	{
		int i;
		Node *temp, *save;
		temp=head;
		for(i=0;i<(pos-2);i++)
		{
			temp=temp->next;
		}
		save=temp->next;
		temp->next=save->next;
		free(save);
		return head;
	}

}
int main()
{
	struct node *head =NULL;
	int i,pos,num;
	clrscr();
	for(;;)
	{
		printf("\n Select any option :");
		printf("\n [1] Insert at Front \n [2] Insert at End \n [3] Insert at any position \n [4] Delete at Front \n [5] Delete at End \n [6] Delete at any position \n [7] Display \n [8] Exit \n");
		scanf("%d",&i);

		if(i==1)
		{
			printf("\n Enter the number to insert at Front :");
			scanf("%d",&num);
			head=insertF(head,num);
			display(head);
		}
		else if(i==2)
		{
			printf("\n Enter the number to insert at End :");
			scanf("%d",&num);
			head=insertE(head,num);
			display(head);
		}
		else if(i==7)
			display(head);
		else if(i==3)
		{
			printf("\n Enter the position at which you want to insert new element :");
			scanf("%d",&pos);
			printf("\n Enter the number to insert at %d position :",pos);
			scanf("%d",&num);
			head=insertPos(head,pos,num);
			display(head);
		}
		else if(i==4)
		{
			head = deleteF(head);
			display(head);
		}
		else if(i==5)
		{
			head = deleteE(head);
			display(head);
		}
		else if(i==6)
		{
			cout<<"Enter the position at which you want to delete :";
			int pos;
			cin>>pos;
			head = deletePos(head,pos);
			display(head);
		}
		else
			return 0;

	}
	getch();
	return 0;

}

