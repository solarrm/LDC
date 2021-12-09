#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int arr[4] = { 0 };
	int *n = arr;
	for (i = 0; i < 4; i++) {scanf("%d", &arr[i]);}
	int size = sizeof(arr) / sizeof(arr[0]);

	int* numb = arr;
	for (i = 0; i < 4; i++) {
		printf("%d ", *(numb + i));
	}
	printf("\n");
	int* mas;
	mas = (int*)malloc(size);
	for (i = 0; i < 4; i++) {
		scanf("%d", &mas[i]);
	}
	for (i = 0; i < size; i++) {
		printf("%d ", *(mas + i));
	}
	free(mas);
	return 0;
}
