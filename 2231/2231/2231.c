#include <stdio.h>
#include <stdlib.h>

//함수를 만들어주니까 코드가 이렇게 간단해지네..  개꿀!!
//근데 eachNumber에서 시간을 너무 잡아먹어서 새로운 코드가 필요하다. 

int eachNumber(int n) {
	int res=0;
	while (n != 0) {
		res = res % 10;
		res = res / 10;
	}
	return res;
}

int main() {

	int* arr;
	int n;
	arr = (int*)malloc(sizeof(int) * 1000001);
	arr[0] = 0;
	arr[1000000] = 1000001;

	for (int i = 1; i <= 9; i++) {
		arr[i] = i;
	}

	for (int i = 10; i <= 999999; i++) {
		arr[i] = i + eachNumber(i);
	}

	scanf("%d", &n);

	for (int i = 0; i <= 1000000; i++) {
		if (n == arr[i]) {
			printf("%d", i);
			break;
		}
	}

	return 0;
}