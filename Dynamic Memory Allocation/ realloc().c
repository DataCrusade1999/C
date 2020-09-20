#include<stdio.h>
#include<stdlib.h>
void main() {
	int i, n, * ptr,a;
	printf("Enter The Size Of Array\t");
	scanf_s("%d", &n);
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL) {
		printf("Memory Allocation Has Been Failed");
	}
	else {
		printf("Memory Allocation Has Been Sucessful\n");
		printf("Enter The Elements Of The Array\n");
		for (i = 0; i < n; i++) {
			scanf_s("%d", &ptr[i]);
		}
		printf("Elements of The Array Are\n");
		for (i = 0; i < n; i++) {
			printf("%d\n", ptr[i]);
		}
	}
	printf("Writing More Elements With The Help Of Realloc\n");
	printf("Enter The New Size Of Array\t");
	scanf_s("%d", &a);
	//Whatever Memory You Want To Reallocate It(Reallocate) Will Only Allocate a-n Bytes
	ptr = realloc(ptr, a * sizeof(int));//<--- Memory Leakage Could Occur
	if (n > a) {
		printf("Enter Something Greater Than The Previous Array Size");
	}
	else {
		printf("Enter The Elements Of The Array\n");
		for (i = n; i < a; i++) {
			scanf_s("%d", &ptr[i]);
		}
		printf(" Now The Elements Of The Array Are\n");
		for (i = 0; i < a; i++) {
			printf("%d\n", ptr[i]);
		}

	}




}
