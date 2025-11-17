#include <stdio.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void create()
{   struct Node *temp,*newNode;
    int n;
    printf("Enter no.of elements\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {newNode=(struct Node*)malloc(sizeof(struct Node));
    int value;
    printf("Enter value for insertion\n");
    scanf("%d",&value);
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;

    }
    else
    {
        temp->next=newNode;

    }
    temp=newNode;
    }
    printf("Completed creation\n");
}

void display ()
{
    struct Node* temp = head;
    if(temp==NULL){
        printf("List is empty.\n");
        return;
    }
    printf("Linked List:");
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
printf("\n");
}
void deleteAtBeginning(){
    if(head==NULL)
    printf("List is empty.\n");
    else{
        struct Node* temp = head;
        head = head->next;
        free(temp);
        printf("Node deleted from beginning.\n");
    }
}
void deleteAtEnd()
{
    struct Node *temp;
    if (head == NULL)
   printf("List is empty.\n");
   else if(head->next == NULL)
    {
    free(head);
    head = NULL;
    printf("Node deleted from end.\n");
   }
   else{
    struct Node *temp = head, *prev;
    while(temp -> next != NULL)
        {
        prev=temp;
        temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
        printf("Node deleted from end.\n");
    }
}

void deleteAtposition(int value)
{
    struct Node *temp=head,*prev=NULL;
    if(head==NULL)
    printf("List is empty\n");
    else if(head->next==value)
    {
        head=head->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=value)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
        printf("The value does not exist in list\n");
    prev->next=temp->next;
    free(temp);
    printf("%d deleted from list\n",value);

}
int main()
{
    int choice,pos;
    do
    {   printf("Enter your choice.\n");
          printf("1.creation of linked list\n");
          printf("2.deletion at benginnng\n");
          printf("3.deletion at VALUE.\n");
          printf("4.deletion at end\n");
          printf("5.display contents\n");
          printf("6.Exit\n");
          scanf("%d",&choice);
          switch(choice)
          {

          case 1:
            create();
            break;

          case 2:
            deleteAtBeginning();
            break;

          case 3:
            printf("Enter value");
            scanf("%d",&pos);
            deleteAtposition(pos);
            break;

          case 4:
            deleteAtEnd();
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
