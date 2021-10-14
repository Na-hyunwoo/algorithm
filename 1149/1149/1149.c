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




	if (arr[0][0] > arr[0][1]) {
		min = arr[0][1];
		pivot = 1;
	}
	else {
		min = arr[0][0];
		pivot = 0;
	}
	if (min > arr[0][2]) {
		pivot = 2;
		min = arr[0][2];
	}
	sum += min;

	printf("pivot:%d\n",pivot );
	

	for (int i = 1; i < n; i++) {
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
					printf("pivot:%d\n", pivot);
					
				}
			}
		}
		sum += min;
	}

	printf("%d", sum);
	


	return 0;
}