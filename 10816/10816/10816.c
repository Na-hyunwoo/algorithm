#include <stdio.h>
#include <stdlib.h>

int compare(const void* first, const void* second) {
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main() {
	int n1, n2;
	int* arr1, * arr2;

	scanf("%d", &n1);
	arr1 = (int*)malloc(sizeof(int) * n1);
	for (int i = 0; i < n1; i++) {
		scanf("%d", &arr1[i]);
	}
	
	qsort(arr1, n1, sizeof(int), compare);
	for (int i = 0; i < n1; i++) {
		printf("%d ", arr1[i]);
	}

	scanf("%d", &n2);
	arr2 = (int*)malloc(sizeof(int) * n2);
	for (int i = 0; i < n2; i++) {
		scanf("%d", &arr2[i]);
	}








	return 0;
}