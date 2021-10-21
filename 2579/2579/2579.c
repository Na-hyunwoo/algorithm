#include <stdio.h>

//연속된 세 개의 계단을 이어서 밟으면 안되는 점을 놓치면 안됩니다. 

int Max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main() {

	int n;
	int F[301] = { 0, };
	int sum[301] = { 0, };

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &F[i]);
	}

	for (int i = 1; i <= n; i++) {
		sum[i] = Max((sum[i - 1] + F[i]), (sum[i - 2], F[i]));
	}

	printf("%d", sum[n]);

	return 0;
}