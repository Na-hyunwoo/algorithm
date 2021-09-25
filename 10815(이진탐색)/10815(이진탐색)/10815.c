#include <stdio.h>
#include <stdlib.h>

int compare(const void* first, const void* second) {
	if (*(int*)first > *(int*)second) return 1;
	else if (*(int*)first < *(int*)second) return -1;
	else return 0;
}

int binary_search(int* arr, int size, int n) {
	int start = 0;
	int end = size-1;
	int mid;
	while (start <= end) {
		mid = (start + end) / 2;
		if (arr[mid] == n) return 1;
		else if (arr[mid] < n) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	return 0;
}

int main() {
	int* arr1, * arr2;
	int n1, n2;

	scanf("%d", &n1);
	arr1 = (int*)malloc(sizeof(int) * n1);
	for (int i = 0; i < n1; i++) {
		scanf("%d", &arr1[i]);
	}
	
	qsort(arr1, n1, sizeof(int), compare);

	scanf("%d", &n2);
	arr2 = (int*)malloc(sizeof(int) * n2);
	for (int i = 0; i < n2; i++) {
		scanf("%d", &arr2[i]);
		printf("%d ",binary_search(arr1, n1, arr2[i]));
	}


	


	return 0;
}