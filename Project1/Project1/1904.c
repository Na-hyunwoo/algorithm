#include <stdio.h>

int main() {

	int arr[251] = { 0, }; //여기서 오류가 남, 배열의 크기는 25만정도 까지라니까. 문제에서 주어진 15746으로 나눴을 때의 나머지를 잘 활용해보자. 
	int n;

	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i < 251; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	while (1) {
		scanf("%d", &n);
		if (n == -1)return;
		printf("%d\n", arr[n]);
	}
	
	return 0;
}