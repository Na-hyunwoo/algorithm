#include <stdio.h>

int arr[501][501] = { 0, };
int sum[502][502] = { 0, }; //sum�� ũ�⸦ 502�� �ϴ� ������, �ε��� 0�� 501�� 0���� �־� �����ν�, Max���� ����� �����ϰ� �ϱ� ������.

//���� ������ȹ�� ���ݴ� ���� ������. ��¥ �� ������ �ٸ��� ���� 1�� ���ϰ� ��Ʈ�� ���� Ǭ������ �d ��� �ذ��ߴ�. ����ϴ�
//�̷��� ���ݾ� ���Ű� �δ±���. ��¥ �� ������ ���� �����մϴ�. 

int Max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main() {

	int n;
	int max = 0, temp;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			sum[i][j] = Max(sum[i - 1][j - 1], sum[i - 1][j]) + arr[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		temp = Max(sum[n][i], sum[n][i + 1]);
		if (temp > max) max = temp;
	}

	/*for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}*/

	printf("%d", max);

	return 0;
}