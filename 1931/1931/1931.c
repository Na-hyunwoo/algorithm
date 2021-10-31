#include <stdio.h>
#include <stdlib.h>

int compare(int * a, int * b) {
	if (*a < *b) return -1;
	if (*a > *b) return 1;
	return 0;
}

int main() {

	int n;
	int count = 0;
	unsigned int swap;
	unsigned int temp;
	int arr[100000][2] = { 0, };

	scanf("%d", &n);


	for (int i = 0; i < n;i++ ) {
		scanf("%d %d", &arr[i][0],&arr[i][1]);
	}


	
	//이중 배열을 시간 복잡도가 크지 않게 정렬을 해야 한다. 
	/*
	for (int i = 0; i < n-1; i++) { //n-1번 반복. 
		for (int j = 0; j < n - i-1; j++) {
			if (arr[j][1] > arr[j + 1][1]) {
				swap = arr[j][1];
				arr[j][1] = arr[j + 1][1];
				arr[j + 1][1] = swap;
				swap = arr[j][0];
				arr[j][0] = arr[j + 1][0];
				arr[j + 1][0] = swap;
			}
		}
	}*/

	//c언어에 내장되어있는 sort함수를 활용해 보자. 근데 이중 배열을 어떻게 하냐....
	qsort(&arr[n][1], n, sizeof(int),compare);

	//정렬이 잘 되었는지 확인 !
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i][0], arr[i][1]);
	}

	//자 이제 숫자를 세보자 !!
	count++;
	temp = arr[0][1];

	for (int i = 1; i < n; i++) {
		if (temp < arr[i][0]) {
			count++;
			temp = arr[i][1];
		}
	}

	printf("%d", count);

	return 0;
}