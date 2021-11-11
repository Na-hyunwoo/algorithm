#include <stdio.h>

int count(int **arr,int index,int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (index == i) continue;
		else {
			if (arr[i][0] > arr[index][0] && arr[i][1] > arr[index][1]) count++;
		}
	}

	return count;
}

int main() {
	int n;
	scanf("%d", &n);
	int** arr;
	arr = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int) * 2);
	}

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}


	for (int i = 0; i < n; i++) {
		printf("%d ", count(arr, i, n)+1);
	}
	
	free(arr);
	return 0;
}