#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node* link;
	};
	struct node* head, * ptr, * current;
	int n,count;
	head = NULL;
	do
	{
		ptr = (struct node*)malloc(sizeof(struct node));
		if (ptr == NULL) {
			printf("Memory Allocation Has Been Failed");
		}
		if (head == NULL) {
			head = ptr;
			current = ptr;
			current->link = NULL;
			printf("Enter The Data\n");
			scanf("%d", &current->data);
		}
		else {
			current->link = ptr;
			current = ptr;
			current->link = NULL;
			printf("Enter The Data\n");
			scanf("%d", &current->data);

		}
		printf("Enter 1 If You Want To Create More Nodes\n");
		scanf("%d", &n);
	} while (n == 1);
	printf("Your Nodes Are\n");
	current = head;
	count=0;
	while (current != 0) {
		printf("%d\n", current->data);
		current = current->link;
		count++;
	}
	printf(" The Number Of Nodes Are:%d",count);
}
//Creation Of Nodes In Singly Linked List
