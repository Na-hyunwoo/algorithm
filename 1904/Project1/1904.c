#include <stdio.h>

int arr[1000001] = { 0, };

int main() {

	//�迭�� ũ��� 25������ ������ϱ�. �������� �־��� 15746���� ������ ���� �������� �� Ȱ���غ���. 
	int n;

	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i < 1000001; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2])%15746 ;
	}

	
	scanf("%d", &n);
	
	printf("%d\n", arr[n]);
	
	
	return 0;
}