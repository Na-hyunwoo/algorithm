#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	int count = 0;
	unsigned int temp = 0;
	unsigned int swap;
	int* arr;

	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * 2 * n);

	for (int i = 0; i < n*2;i++ ) {
		scanf("%d", &arr[i]);
	}

	//������ �ð��� ���� �������� �����ϱ�
	//n�������� �ϸ� �ð��ʰ� ����. 
	for (int i = 1; i < n * 2; i+=2) {
		for (int j = 1; j < n * 2-2; j += 2) {
			if (arr[j] > arr[j+2]) {
				swap = arr[j+2];
				arr[j+2] = arr[j];
				arr[j] = swap;
				swap = arr[j +1];
				arr[j + 1] = arr[j - 1];
				arr[j - 1] = swap;
			}
		}
	}

	/*for (int i = 0; i < n * 2; i++) {
		printf("%d ", arr[i]);
	}*/

	printf("\n");

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