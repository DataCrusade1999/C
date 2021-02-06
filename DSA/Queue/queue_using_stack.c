#include<stdio.h>
#define MAX 5
int S1[MAX],S2[MAX];
int top1=-1,top2=-1,count=0;

void insert1(int data)
{
    if (top1==MAX-1)
    {
        printf("Overflow");
    }
    
    else
    {
        top1++;
        S1[top1]=data;
    }

}


void enqueue(int x)
{
    insert1(x);
    count++; 
}



void insert2(int data)
{
    if (top2==MAX-1)
    {
        printf("Overflow");
    }
    
    else
    {
        top2++;
        S2[top2]=data;
    }

}

int pop1()
{
    return S1[top1--];
    
}


int pop2()
{
    return S2[top2--];
}

void dequeue()
{
    int a,b;
    if (top1==MAX-1 && top2==MAX-1)
    {
        printf("Queue is full\n");
    }
    
    else
    {
        for (int i = 0; i < count; i++)
        {
            a = pop1();
            insert2(a);
        }
        b = pop2();
        printf("Dequeued element is %d\n",b);
        count--;
        for (int i = 0; i < count; i++)
        {
            a = pop2();
            insert1(a);
        }  
    }
       
}

void display()
{
    int i;
    if(top1==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("Your elements are\n");
        for(i=0;i<=top1;i++)
        {
            printf("%d\n",S1[i]);
        }
    }   
}

void peek()
{
    if(top1==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The front element is %d\n",S1[0]);
    }
    
}

void main()
{
    int a,num;

    while(a!=5)
    {
        printf("\nType 1 to Enqueue\nType 2 to Display\nType 3 to Dequeue\nType 4 to peek\nType 5 to exit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
        printf("Enter the element to enqueue\n");
        scanf("%d",&num);
        enqueue(num);
        break;
        
        case 2:
        display();
        break;
        
        case 3:
        dequeue();
        break;

        case 4:
        peek();
        break;

        case 5:
        printf("Exited\n");
        break;

        default:
        printf("Wrong Choice!!");
        }
    }
}