#include <stdio.h>

//���ӵ� �� ���� ����� �̾ ������ �ȵǴ� ���� ��ġ�� �ȵ˴ϴ�. �̰� ��� �����ұ�?

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

	sum[1] = F[1];
	sum[2] = F[1] + F[2];
	sum[3] = Max(F[3] + F[2], F[3] + F[1]);

	for (int i = 4; i <= n; i++) {
		sum[i] = Max((sum[i - 2] + F[i]), (sum[i - 3] + F[i-1] + F[i]));
	}

	printf("%d", sum[n]);

	return 0;
}