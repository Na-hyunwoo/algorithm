#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	int count = 0;
	unsigned int temp = 0;
	int* arr;

	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * 2 * n);

	for (int i = 0; i < n*2;i++ ) {
		scanf("%d", &arr[i]);
	}

	count++;
	temp = arr[1];

	for (int i = 2; i <= n * 2; i += 2) {
		if (temp < arr[i]) {
			count++;
			temp = arr[i+1];
		}
	}

	printf("%d", count);


}