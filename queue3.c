#include<stdio.h>
#define N 5
int queue[5];
int front=-1;
int end=-1;

void enque()
{
  int a;
  if(end==N-1)
  printf("Overflow:queue full\n");
  else
  {
    printf("Enter the number\n");
    scanf("%d",&a);
    end++;
    queue[end]=a;
    printf("Insertion done\n");

  }
  if(end==0)
    front=0;
}
void deque()
{
    if(front==-1 && end==-1)
        printf("Underflow:no elements to delete\n");
    else if(front==end)
        front=end=-1;
    else
    {
        front++;
    }
}
void display()
{

    if(front==-1 && end==-1)
        printf("No element\n");
    else
    {   printf("Displaying elements:\n");
        for(int i=front;i<=end;i++)
            printf("%d ",queue[i]);
            printf("\n");
    }
}
void main()
 {
     int choice=1;
    while(choice!=0)
    {
         printf("Enter 1 for enque 2 for deque 3 for display and 0 to stop\n");
         scanf("%d",&choice);
         if(choice==0)
            break;
            switch(choice)
            {
            case 1:
                enque();
                break;
            case 2:
               deque();
               break;
            case 3:
                display();
                break;
            }

    }

}
