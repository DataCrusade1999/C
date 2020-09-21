#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node*next;
    };
    struct node *head=NULL ,*traverse,*newnode;
    int n,count,a,Position;
    printf("Enter The Number Of Nodes You Want\n");
    scanf("%d",&n);
    a=1;
    while(a<=n){
        newnode=(struct node*)malloc(sizeof(struct node));
        if(head==NULL){
            printf("Enter Data\n");
            scanf("%d",&newnode->data);
            head=newnode;
            traverse=newnode;
            traverse->next=NULL;
        }
        else{
            printf("Enter Data\n");
            scanf("%d",&newnode->data);
            traverse->next=newnode;
            traverse=newnode;
            traverse->next=NULL;
            
        }
        a++;
        
    }
    traverse=head;
    count=0;
    printf("Your Nodes Are\n");
    while(traverse!=0){
        printf("%d\n",traverse->data);
        traverse=traverse->next;
        count++;
    }
    printf("You Have %d Nodes\n",count);
    printf("==========================================================================================\n");
    printf("Entering The Node At A Specified Place\n");
    printf("==========================================================================================\n");
    printf("Enter Position\n");
    scanf("%d",&Position);
    if(Position>count){
        printf("Position is Not Valid Try Something Less Than-->%d\n",count);
    }
    else{
        count=1;
        traverse=head;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&newnode->data);
        while(Position>count){
            traverse=traverse->next;
            count++;
        }
        newnode->next=traverse->next;
        traverse->next=newnode;
    }
    traverse=head;
    count=0;
    printf("Your Nodes Are\n");
    while(traverse!=0){
        printf("%d\n",traverse->data);
        traverse=traverse->next;
        count++;
    }
    printf("You Have %d Nodes\n",count);
    
    
    
    
    
    
    
    
    
    
}