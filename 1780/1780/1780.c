#include <stdio.h>
#include <stdbool.h>

int answer[3] = { 0, };
int arr[2200][2200] = { 0, };

bool allSameNumber(int x, int y, int n) {
	int check = arr[x][y];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[x + i][y + i] != check) {
				return false;
			}
		}
	}
	return true;
}


void makePaper(int x, int y, int n) {
	if (allSameNumber(x, y, n)) {
		int paperNum = arr[x][y];
		answer[paperNum + 1]++;
		return;
	}

	int div = n / 3;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			makePaper(x + div * i, y + div * j, div);
		}
	}
}


int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	makePaper(0,0,n);

	for (int i = 0; i < 3; i++) {
		printf("%d\n", answer[i]);
	}

	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int minus = 0, zero = 0, one = 0;
int arr[2200][2200];

void division(int n, int x, int y) {
	int check;
	while (n > 1) {
		check = arr[x][y];
		for (int i = x; i < n; i++) {
			for (int j = y; j < n; j++) {
				if (arr[x][y] == check) {
					continue;
				}
				else {
					division(n / 3, 0, 0);
					division(n / 3, n / 3 + 1, 0);
					division(n / 3, 2 * n / 3 + 1, 0);
					division(n / 3, 0, n / 3 + 1);
					division(n / 3, n / 3 + 1, n / 3 + 1);
					division(n / 3, 2 * n / 3 + 1, n / 3 + 1);
					division(n / 3, 0, 2 * n / 3 + 1);
					division(n / 3, n / 3 + 1, 2 * n / 3 + 1);
					division(n / 3, 2 * n / 3 + 1, 2 * n / 3 + 1);
				}
			}
		}
		if (check == -1) {
			minus++;
			return 0;
		}
		else if (check == 0) {
			zero++;
			return 0;
		}
		else if (check == 1) {
			one++;
			return 0;
		}
	}


}

int main() {
	int n;

	scanf("%d", &n);



	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	division(n, 0, 0);

	printf("%d\n%d\n%d", minus, one, zero);




	return 0;
}
*/