#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node* link;
	};
	struct node* head=NULL, * newnode, * traverse;
	int n,count,s,a;
	printf("To Make Nodes Press 1\n");
	printf("To Exit Type NULL\n");
	scanf("%d", &n);
	while (n <= 3) {
		newnode = (struct node*)malloc(sizeof(struct node));
		if (head == NULL) {
			printf("Enter Data\n");
			scanf("%d", &newnode->data);
			head = newnode;
			traverse = newnode;
			traverse->link = NULL;
		}
		else{
			printf("Enter Data\n");
			scanf("%d", &newnode->data);
			traverse->link = newnode;
			traverse = newnode;
			traverse->link = NULL;
		}
		n++;
	}
	traverse = head;
	count = 0;
	if(head!=NULL){
	    printf("Your Nodes Are\n");
	}
	
	while (traverse != 0) {
		printf("%d\n", traverse->data);
		traverse = traverse->link;
		count++;
	}
	printf("The Number Of Nodes are -->%d\n",count);
	if (head==NULL){
	    printf("Sorry You Don't Have Any Nodes\n");
	}
	printf("================================================================================\n");
	printf("Inserting New Node From Beggining\n");
	printf("================================================================================\n");
	printf("To Make Nodes Press 1\n");
	printf("To Exit Type NULL\n");
	scanf("%d", &s);
	while(s<=3){
	   	newnode = (struct node*)malloc(sizeof(struct node));
	   	printf("Enter Data\n");
	   	scanf("%d",&newnode->data);
	   	newnode->link=head;
	   	head=newnode;
	   	s++;
	}
	traverse = head;
	count = 0;
	if(head!=NULL){
	    printf("Your Nodes Are\n");
	}
	
	while (traverse != 0) {
		printf("%d\n", traverse->data);
		traverse = traverse->link;
		count++;
	}
	printf("The Number Of Nodes are -->%d\n",count);
	printf("================================================================================\n");
	printf("Inserting New Node From End\n");
	printf("================================================================================\n");
	printf("To Make Nodes Press 1\n");
	printf("To Exit Type NULL\n");
	scanf("%d",&a);
	if(a==1){
	    newnode = (struct node*)malloc(sizeof(struct node));
	    printf("Enter Data\n");
	    scanf("%d", &newnode->data);
	    newnode->link=NULL;
	}
	traverse=head;
	while(traverse->link!=0){
	    traverse=traverse->link;
	}
	traverse->link=newnode;
	traverse = head;
	count = 0;
	if(head!=NULL){
	    printf("Your Nodes Are\n");
	}
	
	while (traverse != 0) {
		printf("%d\n", traverse->data);
		traverse = traverse->link;
		count++;
	}
	printf("The Number Of Nodes are -->%d\n",count);
}
// Before Running The Program Check For The Indentations
