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


	
	//���� �迭�� �ð� ���⵵�� ũ�� �ʰ� ������ �ؾ� �Ѵ�. 
	for (int i = 0; i < n-1; i++) { //n-1�� �ݺ�. 
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

	//������ �� �Ǿ����� Ȯ�� !
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i][0], arr[i][1]);
	}

	//�� ���� ���ڸ� ������ !!
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