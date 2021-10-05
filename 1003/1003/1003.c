#include <stdio.h>


int main() {
	int count,num;
	int fibo[41][2];

	scanf("%d", &count);

	fibo[0][0] = 1;
	fibo[0][1] = 0;
	fibo[1][0] = 0;
	fibo[1][1] = 1;

	for (int i = 2; i <= 40; i++) {
		fibo[i][0] = fibo[i-1][0] + fibo[i-2][0];
		fibo[i][1] = fibo[i-1][1] + fibo[i-2][1];
	}

	for (int i = 0; i < count; i++) {
		scanf("%d", &num);
		printf("%d %d\n", fibo[num][0],fibo[num][1]);
	}


}