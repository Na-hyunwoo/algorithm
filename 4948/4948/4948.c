#include <stdio.h>


int main() {
	int n;
	int sum;


	while (1) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		if (n == 1) {
			printf("1\n");
		}
		else {
			sum = n - 1;
			for (int i = n + 1; i < 2 * n; i++) {
				for (int j = 2; j * j <= i; j++) {
					if (i % j == 0) {
						sum--;
						break;
					}
				}
			}
			printf("%d\n", sum);
		}
		

	}





	return 0;
}


