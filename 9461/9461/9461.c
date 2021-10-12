#include <stdio.h>

int main() {
	int n;
	int a;
	double arr[101] = { 0, };

	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;

	for (int i = 4; i < 101; i++) {
		arr[i] = arr[i - 2] + arr[i - 3];
	}

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		printf("%.0lf\n", arr[a]);
	}

	return 0;
}