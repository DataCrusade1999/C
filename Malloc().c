#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n, * ptr,i;
	printf("Enter The size of Array\t");
	scanf_s("%d", &n);
	ptr =( int*)malloc(n * sizeof(int));
	if (ptr == NULL) {
		printf("Memory Allocation Has Been Failed");
	}
	else {
		printf("Memory Allocation Has Been Sucessful\n");
		printf("Enter The Elements of The Array\t");
		for (i = 0; i < n; i++) {
			scanf_s("%d", &ptr[i]);
		}
		printf("The Elements Of The Array Are");
		for (i = 0; i < n; i++) {
			printf("%d\t", ptr[i]);
		}
	}
}