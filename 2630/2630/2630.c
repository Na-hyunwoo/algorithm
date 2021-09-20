#include <stdio.h>
#include <stdbool.h>

int array[128][128];
int blue = 0, white = 0;

void check(int n,int x_s,int y_s) {
	
	bool zero, one;
	zero = one = true;
	for (int i = x_s; i < x_s + n; i++) {
		for (int j = y_s; j < y_s + n; j++) {
			if (array[i][j] == 1) zero = false;
			if (array[i][j] == 0) one = false;
		}
	}

	if (one == true) {
		blue++;
		return;
	}
	if (zero = true) {
		white++;
		return;
	}

	check(n / 2, x_s, y_s);
	check(n / 2, x_s + n / 2, y_s);
	check(n / 2, x_s, y_s + n / 2);
	check(n / 2, x_s + n / 2, y_s + n / 2);
}

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &array[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

	check(n,0,0);

	printf("%d\n%d", white, blue);
}