#include <stdio.h>
#include <stdlib.h>

//�Լ��� ������ִϱ� �ڵ尡 �̷��� ����������..  ����!!
//�ٵ� eachNumber���� �ð��� �ʹ� ��ƸԾ ���ο� �ڵ尡 �ʿ��ϴ�. 

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