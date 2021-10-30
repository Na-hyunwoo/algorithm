#include <stdio.h>
#include <stdlib.h>


int main() {

	int n;
	int count = 0;
	unsigned int swap;
	unsigned int temp;
	int** arr;

	scanf("%d", &n);

	arr = (int**)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int) * 2);
	}

	for (int i = 0; i < n;i++ ) {
		scanf("%d %d", &arr[i][0],&arr[i][1]);
	}


	
	//이중 배열을 시간 복잡도가 크지 않게 정렬을 해야 한다. 
	for (int i = 0; i < n-1; i++) { //n-1번 반복. 
		for (int j = 0; j < n - i-1; i++) {
			if (arr[j][1] > arr[j + 1][1]) {
				swap = arr[j][1];
				arr[j][1] = arr[j + 1][1];
				arr[j + 1][1] = swap;
				swap = arr[j][0];
				arr[j][0] = arr[j + 1][0];
				arr[j + 1][0] = swap;
			}
		}
	}

	//정렬이 잘 되었는지 확인 !
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i][0], arr[i][1]);
	}

	//자 이제 숫자를 세보자 !!
	count++;
	temp = arr[1];

	for (int i = 2; i < n * 2; i += 2) {
		if (temp < arr[i]) {
			count++;
			temp = arr[i+1];
		}
	}

	printf("%d", count);


}