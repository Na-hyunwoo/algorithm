#include <stdio.h>

//���ӵ� �� ���� ����� �̾ ������ �ȵǴ� ���� ��ġ�� �ȵ˴ϴ�. 

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