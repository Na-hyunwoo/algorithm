#include <stdio.h>

int arr[501][501] = { 0, };
int sum[502][502] = { 0, }; //sum의 크기를 502로 하는 이유는, 인덱스 0과 501에 0값을 넣어 줌으로써, Max안의 계산을 수월하게 하기 위함임.

//내가 동적계획을 깨닫는 날이 오구나. 진짜 이 문제는 다른거 참고 1도 안하고 노트에 쓱쓱 푼다음에 촥 적어서 해결했다. 대견하다
//이렇게 조금씩 열매가 맺는구나. 진짜 더 열심히 하자 감사합니다. 

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