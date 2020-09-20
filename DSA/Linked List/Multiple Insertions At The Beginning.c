#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node* link;
	};
	struct node* head, * ptr, * current, * insert;
	int n, num;
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
	while (current != 0) {
		printf("%d\n", current->data);
		current = current->link;
	}
	//Inserting A New Node At The Beggining
	printf("Insert A New Node At The Beggining\n");
	do {
		ptr = (struct node*)malloc(sizeof(struct node));
		if (ptr == NULL) {
			printf("Memory Allocation Has Been Failed");
		}
		insert = head;
		head = ptr;
		current = ptr;
		current->link = insert;
		printf("Enter data\n");
		scanf("%d", &current->data);
		printf("Enter 2 If You Want To Insert More Nodes At The Beggining\n");
		scanf("%d", &num);
	} while (num == 2);
	printf("Your Nodes Are\n");
	current = head;
	while (current != 0) {
		printf("%d\n", current->data);
		current = current->link;
	}
}
