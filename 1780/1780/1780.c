#include <stdio.h>
#include <stdlib.h>

int minus=0,zero = 0, one = 0;

void division(int **arr,int n,int x,int y) {
	int check;
	while (n > 1) {
		check = arr[x][y];
		for (int i = x; i < n; i++) {
			for (int j = y; j < n; j++) {
				if (arr[x][y] == check) {
					continue;
				}
				else {
					division(arr, n / 3, 0, 0);
					division(arr, n / 3, n / 3 + 1, 0);
					division(arr, n / 3, 2 * n / 3 + 1, 0);
					division(arr, n / 3, 0, n / 3 + 1);
					division(arr, n / 3, n / 3 + 1, n / 3 + 1);
					division(arr, n / 3, 2 * n / 3 + 1, n / 3 + 1);
					division(arr, n / 3, 0, 2 * n / 3 + 1);
					division(arr, n / 3, n / 3 + 1, 2 * n / 3 + 1);
					division(arr, n / 3, 2 * n / 3 + 1, 2 * n / 3 + 1);
				}
			}
		}
		if (check == -1) {
			minus++;
			return 0;
		}
		else if (check == 0) {
			zero++;
			return 0;
		}
		else if (check == 1) {
			one++;
			return 0;
		}
	}


}

int main() {
	int n;
	int** arr;
	scanf("%d", &n);

	arr = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int) * n);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	division(arr, n,0,0);

	printf("%d\n%d\n%d", minus, one, zero);




	return 0;
}