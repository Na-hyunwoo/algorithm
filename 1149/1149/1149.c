#include <stdio.h>

int main() {
	int n,sum=0,pivot;
	int arr[1000][3] = { 0, };
	int min[1000] = { 0, };

	scanf("%d", &n);


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}




	if (arr[0][0] > arr[0][1]) {
		min[0] = arr[0][1];
		pivot = 1;
	}
	else {
		min[0] = arr[0][0];
		pivot = 0;
	}

	if (min[0] > arr[0][2]) {
		pivot = 2;
		min[0] = arr[0][2];
	}

	printf("min[0]:%d\n", min[0]);

	sum += min[0];


	

	for (int i = 1; i < n; i++) {
		if (pivot == 0) {
			min[i] = arr[i][1];
		}
		else if (pivot == 1) {
			min[i] = arr[i][0];
		}
		else {
			min[i] = arr[i][0];
		}
		
		for (int j = 0	; j < 3; j++) {
			if (j!=pivot) {
				if (arr[i][j] <= min[i]) {
					min[i] = arr[i][j];
					
					
				}
			}
		}
		if (min[i] == arr[i][0]) {
			pivot = 0;
		}
		else if (min[i] == arr[i][1]) {
			pivot = 1;
		}
		else {
			pivot = 2;
		}


		printf("min[%d]:%d\n", i, min[i]);
		sum += min[i];
	}

	printf("%d", sum);
	


	return 0;
}