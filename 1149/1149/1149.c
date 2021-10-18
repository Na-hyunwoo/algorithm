#include <stdio.h>

//occidere라는 분의 블로그에서 내용을 찾았는데, 코드가 너무 깔끔하다. 더이상 깔끔할 수 가 없다.  

int Min(int a, int b) {
	if (a > b) return b;
	else return a;
}

int main() {
	int n;
	int d[1001][3] = { 0, };
	int a[1001][3] = { 0, };

	scanf("%d", &n);


	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 1; i <= n; i++) {
		d[i][0] = Min( d[i - 1][1], d[i - 1][2]) + a[i][0];
		d[i][1] = Min(d[i - 1][0], d[i - 1][2]) + a[i][1];
		d[i][2] = Min(d[i - 1][0], d[i - 1][1]) + a[i][2];
	}

	printf("%d", Min(Min(d[n][0], d[n][1]), d[n][2]));
	
	return 0;
}