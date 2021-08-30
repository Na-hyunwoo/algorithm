#include <stdio.h>

int main() {
	int m, n;
	int temp;

	scanf("%d %d", &m, &n);

	for (int i = m; i <= n; i++) {
		temp = 0;
		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				temp = 1;
				break;
			}
		}
		if (i == 1) {
			temp = 1;
		}
		if (temp == 0) {
			printf("%d\n", i);
		}
	}


	return 0;
}