#include <stdio.h>

int* list(int a) {
	int *arr=(int *)malloc(sizeof(int)*a);
	int len;
	for (int i = 2; i < a; i++) {
		arr[i-2] = i;
	}

	len = sizeof(arr);

	for (int i = 0; i < len; i++) {
		printf("arr[%d]:%d\n", i, arr[i]);
	}

	for (int i = 0; i < len; i++) {
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				for (int k = j; k < len-1; k++) {
					arr[k] = arr[k + 1];
				}
				len--;
			}
		}
	}

	for (int i = 0; i < len; i++) {
		printf("arr[%d]:%d\n", i, arr[i]);
	}

	return arr;
}

int main() {
	int *arr;
	arr = list(6);
	for (int i = 0; i < sizeof(arr); i++) {
		printf("%d\n", arr[i]);
	}
}

/*
int main() {
	int n;
	int a;
	int arr[10000] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		for (int j = 2; j < a; j++) {
			for (int k = 2; k < j; k++) {
				if (j % k == 0) {
					break;
				}
			}
		}
	}

	return 0;


}
*/