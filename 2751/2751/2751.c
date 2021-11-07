#include <stdio.h>
#include <stdlib.h>

int compare(int *a, int *b) {
	if (*a > *b) return 1;
	else if (*a < *b) return -1;
	else return 0;
}

int main() {
	int n;
	int* arr;
	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	qsort(arr, n, sizeof(int), compare);

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}