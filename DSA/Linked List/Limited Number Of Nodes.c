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
	int n,count;
	printf("To Make Nodes Press 1\n");
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
		else {
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
	printf("Your Nodes Are\n");
	while (traverse != 0) {
		printf("%d\n", traverse->data);
		traverse = traverse->link;
		count++;
	}
	printf("The Number Of Nodes are -->%d",count);
	if (head==NULL){
	    printf("Sorry You Don't Have Any Nodes\n");
	}
	
}
