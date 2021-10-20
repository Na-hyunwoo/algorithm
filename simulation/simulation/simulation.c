#include <stdio.h>

int main() {
	int A[6] = { 1, 2, 2, 2, 2, 4 };
	int B[6] = { 0, };

	int length = 6;
	int n = 1;

	B[0] = A[0];

	for (int i = 1; i < length; i++) {
		if (A[i] != B[n-1]) {
			B[n] = A[i];
			n++;
		}
	}

	for (int i = 0; i < length; i++) {
		printf("%d ", B[i]);
	}
	



	return 0;
}