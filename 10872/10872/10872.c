#include <stdio.h>

int main() {
	int n, sum = 1;
	scanf("%d", &n);

	if (n == 0) {

	}
	else {
		for (int i = 1; i <= n; i++) {
			sum *= i;
		}
	}

	printf("%d", sum);


	return 0;
}