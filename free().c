#include<stdio.h>
#include<stdlib.h>
void main() {
	int i, n, * ptr;
	printf("Enter The Size Of The Array\t");
	scanf_s("%d", &n);
	ptr = (int*)calloc(n, sizeof(int));
	if (ptr == NULL) {
		printf("Memory Allocation Has Been Failed");
	}
	else {
		printf("Memory Has Been Succesfully Allocated\n");
		printf("Enter The Elements Of The Array");
		for (i = 0; i < n; i++) {
			scanf_s("%d", &ptr[i]);
		}
		printf("The Elements Of The Array Are\n");
		for (i = 0; i < n; i++) {
			printf("%d\t", ptr[i]);
		}
		free(ptr);
		printf("Now The Elements Are...\n");
		for (i = 0; i < n; i++) {
			printf("%d", ptr[i]);
		}
	}
}