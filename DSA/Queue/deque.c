#include<stdio.h>
#define size 5
int deque[size];
int front=-1,rear=-1;

void enqueuefront(int x)
{
    if(((rear+1)%size)==front)
    {
        printf("queue is full,hence your data is not enqueued\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        deque[front] = x;
    }
    else if (front==0)
    {
        front = size-1;
        deque[front] = x;
    }
    else
    {
        front--;
        deque[front] = x;
        
    }
    
}
void enqueuerear(int x)
{
    if(((rear+1)%size)==front)
    {
        printf("queue is full,hence your data is not enqueued\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        deque[rear] = x;
    }
    else if(rear==size-1)
    {
        rear = 0;
        deque[rear] = x;
    }
    else
    {
        rear++;
        deque[rear] = x;
    }

}

void display()
{
    int i=front;
    if (front==-1 && rear==-1)
    {
        printf("deque is empty");
    } 
    else
    {
    printf("The elements are\n");
    while(i!=rear)
    {
        printf("%d\n",deque[i]);
        i=((i+1)%size);
    }
    printf("%d\n",deque[rear]);
    }
}

void getfront()
{
    if (front==-1 && rear==-1)    
    {
        printf("deque is empty");
    } 
    else
    {
        printf("The front element is %d\n",deque[front]);
    }
}

void getrear()
{
    if (front==-1 && rear==-1)    
    {
        printf("deque is empty");
    } 
    else
    {
        printf(" The rear element is %d\n",deque[rear]);
    }

}
void dequefront()
{
    if (front==-1 && rear==-1)    
    {
        printf("deque is empty");
    } 
    else if (front==rear)
    {
        printf("The dequed element is %d\n",deque[front]);
        front=rear=-1;
    }
    else if (front==size-1)
    {
        printf("The dequed element is %d\n",deque[front]);
        front=0;
       
    }
    else
    {
        printf("The dequed element is %d\n",deque[front]);
        front++;
    }
}

void dequerear()
{
    if (front==-1 && rear==-1)    
    {
        printf("deque is empty");
    } 
    else if (front==rear)
    {
        printf("The dequed element is %d\n",deque[rear]);
        front=rear=-1;
    }
    else if (rear==0)
    {
        printf("The dequed element is %d\n",deque[rear]);
        rear = size-1;
    }
    else
    {
        printf("The dequed element is %d\n",deque[rear]);
        rear--;
    }

}

void main()
{
    int a,b;

    while(a!=8)
    {
        printf("\nType 1 to Enqueuefront\nType 2 to Enqueuerear\nType 3 to Display\nType 4 to Getfront\nType 5 to Getrear\nType 6 to Dequefront\nType 7 to Dequerear\nType 8 to Exit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
        printf("Enter the number\n");
        scanf("%d",&b);
        enqueuefront(b);
        break;

        case 2:
        printf("Enter the number\n");
        scanf("%d",&b);
        enqueuerear(b);
        break;

        case 3:
        display();
        break;

        case 4:
        getfront();
        break;

        case 5:
        getrear();
        break;

        case 6:
        dequefront();
        break;

        case 7:
        dequerear();
        break;

        case 8:
        printf("Exited!!");
        break;
        
        default:
        printf("Wrong Choice");
        break;
        }
    }
}