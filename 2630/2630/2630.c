#include <stdio.h>

int array[128][128];

void check(int n,int x_s,int y_s) {
	


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

	check(n,0,0);

}