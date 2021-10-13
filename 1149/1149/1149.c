#include <stdio.h>

int main() {
	int n,min,sum=0,pivot;
	int arr[1000][3] = { 0, };

	scanf("%d", &n);


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}



	if (arr[0][0] > arr[0][1]) {
		pivot = 0;
	}
	else {
		pivot = 1;
	}

	for (int i = 0; i < n; i++) {
		if (pivot == 0) {
			min = arr[i][1];
		}
		else if (pivot == 1) {
			min = arr[i][0];
		}
		else {
			min = arr[i][0];
		}
		
		for (int j = 0	; j < 3; j++) {
			if (j!=pivot) {
				if (arr[i][j] < min) {
					min = arr[i][j];
					pivot = j;
					
				}
			}
		}
		sum += min;
		printf("sum:%d\n", sum);
	}

	printf("%d", sum);
	


	return 0;
}