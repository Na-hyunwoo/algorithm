#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int a;
	int *arr;
	int x=0, y=0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		int* arr = (int*)malloc(sizeof(int) * a);
		int len;
		for (int i = 2; i < a; i++) {
			arr[i - 2] = i;
		}

		len = sizeof(arr);

		for (int i = 0; i < len-1; i++) {
			printf("arr[%d]:%d\n", i, arr[i]);
		}

		for (int i = 0; i < len; i++) {
			for (int j = 2; j < arr[i]; j++) {
				if (arr[i] % j == 0) {
					for (int k = j; k < len - 1; k++) {
						arr[k] = arr[k + 1];
					}
					len--;
				}
			}
		}

		for (int i = 0; i < len-1; i++) {
			printf("arr[%d]:%d\n", i, arr[i]);
		}

		for (int i = 0; i < len - 1; i++) {
			for (int j = i; j < len - 1; j++) {
				if (arr[i] + arr[j] == a) {
					if (arr[i] == arr[j]) {
						printf("%d %d", arr[i],arr[j]);
						break;
					}
					else {
						x = arr[i];
						y = arr[j];
					}
				}
			}
		}

		printf("%d %d", x, y);
		free(arr);
	}

	return 0;


}
