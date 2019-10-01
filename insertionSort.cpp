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
    printf("\n");
}

Node* insertSort(Node *head,int num)
{

    Node *temp = (Node*)malloc(sizeof(Node*));
    Node *save= head;
    Node *saveNext=  head;

    if(save==NULL)
    {
        head= temp;
        temp->next=save;
        return head;
    }
    else
    {

            while(save->next->number<num)
            {
                save=save->next;
            }
            saveNext = save->next;
            save->next=temp;
            temp->next=saveNext;
            return  head;

    }
}

int main()
{
    Node *head =NULL;
    int i,num;
    system("cls");
    for(;;)
    {
        printf("\n Select any option :");
        printf("\n [1] Insert while Sorting \n [2] Display \n [3] Exit \n");
        scanf("%d",&i);
        if(i==1)
        {
            printf("\n Enter the number to insert at Front :");
            scanf("%d",&num);
            head=insertSort(head, num);
            display(head);
        }
        else if(i==2)
            display(head);

        else
            return 0;
    }
    getch();
    return 0;

}
