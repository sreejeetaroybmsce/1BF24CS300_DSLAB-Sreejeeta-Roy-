#include<stdio.h>
struct node
{
    int data;
    struct node *next;

};
struct node *head=NULL;

void create()
{   struct node *temp,*newnode;
    int n;
    printf("Enter no.of elements\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter value for insertion\n");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;

    }
    else
    {
        temp->next=newnode;

    }
    temp=newnode;
    }
    printf("Completed creation\n");
}
void insertatbeginning()
{   struct node *temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter value for insertion\n");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=head;
    head=newnode;
    printf("Inserted at beginning\n");

}
void atposition(int pos)
{    struct node *temp=head,*newnode;
    if(pos==1)
     insertatbeginning();
     else
     {newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter value for insertion\n");
    scanf("%d",&value);
    newnode->data=value;
    if(pos<1)
        printf("wrong position\n");
    else
    {
        for(int i=1;i<pos-1&&temp!=NULL;i++)
        {
            temp=temp->next;
        }
        if(temp==NULL)
        printf("Invalid position\n");
        else
        {newnode->next=temp->next;
        temp->next=newnode;}

    }
}printf("inserted at %d position\n",pos);
}
void atend()
{   struct node *temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter value for insertion\n");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
        head=newnode;
    else
    {   temp=head;
    while(temp->next!=NULL)
       temp=temp->next;
       temp->next=newnode;
    }
    printf("inserted at end");
}
void display()
{   struct node *temp,*newnode;
    temp=head;
    printf("Printing the contents of the linked list:\n");
    if(temp==NULL)
        {printf("Empty");
        return;}
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int choice,pos;
    do
    {   printf("Enter your choice.\n");
          printf("1.creation of linked list\n");
          printf("2.insertion at benginnng\n");
          printf("3.insertion at position.\n");
          printf("4.Insertion at end\n");
          printf("5.display contents\n");
          printf("6.Exit\n");
          scanf("%d",&choice);
          switch(choice)
          {

          case 1:
            create();
            break;

          case 2:
            insertatbeginning();
            break;

          case 3:
            printf("Enter position");
            scanf("%d",&pos);
            atposition(pos);
            break;

          case 4:
            atend();
            break;

          case 5:
            display();

          case 6:
            break;

          default:
            printf("Wrong choice");
          }
    }
        while(choice!=6);

    }

