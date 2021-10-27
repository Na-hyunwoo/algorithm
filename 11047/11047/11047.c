#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int count=0;
	unsigned int k;
	int* a;

	scanf("%d %d", &n, &k);

	a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		if (k / a[i] > 0) {
			count += k / a[i];
			k = k % a[i];
		}
		
	}

	printf("%d ", count);


	return 0;
}