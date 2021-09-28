#include <stdio.h>
#include <stdlib.h>

int lower(int* arr,int size, int num) {
	int start = 0;
	int end = size - 1;
	int mid;
	while (start < end) {
		mid = (start + end) / 2;
		if (arr[mid] >= num) {
			end = mid;
		}
		else {
			start = mid + 1;
		}
	}

	return end;
}

int upper(int *arr,int size, int num) {
	int start = 0;
	int end = size - 1;
	int mid;
	while (start < end) {
		mid = (start + end) / 2;
		if (arr[mid] > num) {
			end = mid;
		}
		else {
			start = mid + 1;
		}
	}

	if (end == size - 1 && num == arr[end]) {
		end++;
	}

	return end;
}

int b_search(int* arr, int size, int num) {
	int a, b;
	a = upper(arr, size, num);
	b = lower(arr, size, num);
	
	printf("upper:%d \n", a);
	printf("lower:%d \n", b);

	return a - b;
}

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

	scanf("%d", &n2);
	arr2 = (int*)malloc(sizeof(int) * n2);
	for (int i = 0; i < n2; i++) {
		scanf("%d", &arr2[i]);
		printf("%d \n",b_search(arr1, n1, arr2[i]));

	}








	return 0;
}