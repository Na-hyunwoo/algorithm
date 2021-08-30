#include <stdio.h>

/*
int main() {
	int n;
	int sum;
	int temp;

	while (1) {
		scanf("%d", &n);
		if (n == 1) {
			printf("1\n");
		}
		else {
			for (int i = n + 1; i < 2 * n; i++) {
				temp = 0;
				sum = 0;
				for (int j = 2; j * j <= i; j++) {
					if (i % j == 0) {
						temp = 1;
						break;
					}
				}
				if (temp == 0) {
					printf("i:%d\n", i);
					sum++;
				}
			}
			printf("%d\n", sum);
		}
		

	}





	return 0;
}
*/

int main() {
	int n;
	int temp;
	int sum;

	scanf("%d", &n);

	for (int i = n + 1; i < 2*n; i++) {
		sum = n-1;
		temp = 0;
		for (int j = 2; j  <= i; j++) {
			if (i % j == 0) {
				sum--;
				break;
			}
		}

	}

	printf("%d\n", sum);

}