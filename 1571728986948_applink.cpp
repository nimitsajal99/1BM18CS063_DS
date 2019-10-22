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

Node* concatenate(Node *head1, Node *head2)
{
	if (head1==NULL)
		return head2;
	else if(head2==NULL)
		return head1;

	Node* temp = head1;
	while(temp1!=NULL)
		temp=temp->next;
	temp->next = head2;
	return head1;
}

Node* sort(Node *head)
{
	Node *temp1, *temp2, *save;
	int swap;
	save = head;
	if(head == NULL)
		printf("\n Empty");
	else
	{
		for(temp1=head; temp1->next!=NULL;temp1=temp1->NULL)
		{
			for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
			{
				if(temp1->number>temp2->number)
				{
					swap = temp1->number;
					temp1->number = temp2->number;
					temp2->number = swap;
				}
			}
		}
	}
	return head;
}

Node* reverse(Node* head)
{
	Node *curr, *prev, *temp;
	prev = NULL;
	curr = head;

	while(curr!=NULL)
	{
		temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	head = prev;
	return head;
}

int main()
{
	struct node *head1 =NULL;
	struct node *head2 =NULL;
	int i,num;
	clrscr();
	for(;;)
	{
		printf("\n Select any option :");
		printf("\n  [1] Insert at Front of List 1 \n [2] Insert at Front of List 2 \n [3] Display List 1 \n [4] Display List 2 \n [5] Sort List 1 \n [6] Sort List 2 \n [7] Concatenate \n [8] Reverse List1 \n [9] Reverse List 2 \n [10]Exit \n");
		scanf("%d",&i);

		if(i==1)
		{
			printf("\n Enter the number to insert at Front :");
			scanf("%d",&num);
			head1=insertF(head1,num);
			display(head1);
		}
		else if(i==2)
		{
			printf("\n Enter the number to insert at End :");
			scanf("%d",&num);
			head2=insertE(head2,num);
			display(head2);
		}
		else if(i==3)
			display(head1);
		else if(i==4)
			display(head2);
		else if(i==5)
		{
			head1 = sort(head1);
			display(head1);
		}
		else if(i==6)
		{
			head2 = sort(head2);
			display(head2);
		}
		else if(i==7)
		{
			head = concatenate(head);
			display(head);
		}
		else if(i==8)
		{
			head1 = reverse(head1);
			display(head1);
		}
		else if(i==9)
		{
			head2 = reverse(head2);
			display(head2);
		}
		else
			return 0;

	}
	getch();
	return 0;

}
