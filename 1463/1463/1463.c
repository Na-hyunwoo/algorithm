#include <stdio.h>
#include <stdlib.h>

int minTwo(int a, int b) {
	if (a > b) return b;
	else return a;
}

int minThree(int a, int b, int c) {
	int temp=0;
	if (a > b) temp = b;
	else temp = a;

	if (c > temp) return temp;
	else return c;

}

int main() {
	int n;
	int* F;

	scanf("%d", &n);

	F = (int*)malloc(sizeof(int) * n);

	F[0] = 0;
	F[1] = 0;
	F[2] = 1;
	F[3] = 1;

	for (int i = 4; i <= n; i++) {
		if (n % 2 == 0 && n % 3 == 0) {
			F[i] = minThree(F[i / 2] + 1,F[i/3]+1, F[i - 1] + 1);
		}
		else if (n % 2 == 0) {
			F[i] = minTwo(F[i / 2] + 1, F[i - 1] + 1);
		}
		else if (n % 3 == 0) {
			F[i] = minTwo(F[i / 3] + 1, F[i - 1] + 1);
		}
		else {
			F[i] = F[i - 1] + 1;
		}
	}

	printf("%d", F[n]);
	
	
}