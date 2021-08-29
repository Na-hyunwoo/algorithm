#include <stdio.h>

int main() {
	int m, n, count, index = 0;
	int arr[1230] = { 0, };
	int arr_size;
	int sum = 0;
	scanf("%d %d", &m, &n);

	for (int i = m; i <= n; i++) {
		if (i == 1) {
			continue;
		}
		count = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				count++;
			}
			if (count >= 1) {
				break;
			}
		}
		if (count == 0) {
			arr[index++] = i;
		}
	}

	

	arr_size = sizeof(arr) / sizeof(int);


	for (int i = 0; i < arr_size; i++) {
		sum += arr[i];
	}
	if (sum == 0) {
		printf("-1");
	}
	else {
		printf("%d\n", sum);
		printf("%d\n", arr[0]);
	}

	


	return 0;
}