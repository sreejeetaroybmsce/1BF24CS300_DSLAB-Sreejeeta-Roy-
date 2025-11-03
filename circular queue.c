 #include<stdio.h>
#define N 5
int rear=-1;
int front=-1;
int queue[N];
void enqueue(int x)
{

    if((front==-1)&&(rear==-1))
    {
        front=0;
        rear=0;
        queue[rear]=x;
        printf("Element inserted\n");
    }
    else if(front==(rear+1)%N)
        printf("Overflow condition\n");
    else
    {

        rear=(rear+1)%N;
        queue[rear]=x;
        printf("Element inserted\n");
    }
}
void dequeue()
{
    if((front==-1)&&(rear==-1))
        printf("Underflow\n");
    else if(front==rear)
    {
        printf("deleted %d\n",queue[rear]);
        rear=-1;front=-1;
    }
    else
    {
        printf("deleted %d\n",queue[front]);
        front=(front+1)%N;
    }

}
void display()
{

   for(int i=front;i!=(rear+1)%N;i=(i+1)%N)
   printf("%d ",queue[i]);

}

int main()
{
    int ch;int e;
    ch=1;
    while(ch!=0)
    { printf("1.enqueue 2.dequeue 3.display {any key to exit}\n");
    printf("Enter choice\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Enter element.\n");
        scanf("%d",&e);
        enqueue(e);
    }
    else if(ch==2)
        dequeue();
    else if(ch==3)
        display();
    else
        {printf("Exiting!\n");
        break;}
    }
    return 0;
}
