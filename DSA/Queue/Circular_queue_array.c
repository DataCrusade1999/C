#include<stdio.h>
#define size 5
int queue[size];
int front=-1;
int rear=-1;

void Enqueue()
{
    int x;
    if(((rear+1)%size)==front)
    {
        printf("Overflow");
    }

    else if(front==-1 && rear==-1)
    {
        printf("Enter the element you want to Enqueue\n");
        scanf("%d",&x);
        front=rear=0;
        queue[rear]=x;
    }

    else
    {
        printf("Enter the element you want to Enqueue\n");
        scanf("%d",&x);
        rear=((rear+1)%size);
        queue[rear]=x;
    }
}
void Dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("The queue is empty");
    }
    else if (front==rear)
    {
        printf("The Dequeued element is %d\n",queue[front]);
        front=rear=-1;
    }
    
    else
    {
        printf("The Dequeued element is %d\n",queue[front]);
        front=((front+1)%size);
    }
}
void peek()
{
   if(front==-1 && rear==-1)
   {
      printf("The queue is empty");
   }

   else
   {
      printf("front element is %d\n",queue[front]);
      
   }
  
}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("The queue is empty");
    }
    else
    {
        printf("The elements of the queue are\n");
        while(i!=rear)
        {
            printf("%d\n",queue[i]);
            i=((i+1)%size);
        }
        printf("%d\n",queue[i]);
    } 
}

void main()
{
    int a;

    while(a!=5)
    {
        printf("\nType 1 to Enqueue\nType 2 to Dequeue\nType 3 to Display\nType 4 to Peek\nType 5 to Exit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
        Enqueue();
        break;

        case 2:
        Dequeue();
        break;

        case 3:
        display();
        break;

        case 4:
        peek();
        break;

        case 5:
        printf("Exited!!");
        break;
        
        default:
        printf("Wrong Choice");
        break;
        }
    }
}