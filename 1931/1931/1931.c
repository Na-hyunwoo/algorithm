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


	
	//���� �迭�� �ð� ���⵵�� ũ�� �ʰ� ������ �ؾ� �Ѵ�. 
	/*
	for (int i = 0; i < n-1; i++) { //n-1�� �ݺ�. 
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

	//c�� ����Ǿ��ִ� sort�Լ��� Ȱ���� ����. �ٵ� ���� �迭�� ��� �ϳ�....
	qsort(&arr[n][1], n, sizeof(int),compare);

	//������ �� �Ǿ����� Ȯ�� !
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i][0], arr[i][1]);
	}

	//�� ���� ���ڸ� ������ !!
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