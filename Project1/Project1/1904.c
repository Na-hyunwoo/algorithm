#include <stdio.h>

int main() {

	int arr[251] = { 0, }; //���⼭ ������ ��, �迭�� ũ��� 25������ ������ϱ�. �������� �־��� 15746���� ������ ���� �������� �� Ȱ���غ���. 
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