/*��ǰ ��÷�� ���� N���� ��ȣ(0���� ū ����)���� �ִ�. �� ��ȣ���� 1���� N������ ������ ���� �ϳ����� �Ѵ�.  
�� ��ȣ�� �� ���� ��ȣ�� �ִ����� ã�Ƴ��� �˰����� ��ü���̰� ��Ȯ�ϰ� ����϶�. 
�ۼ��� �˰����� �ð����⵵�� ��(Theta)-ǥ��� ��Ÿ����.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int* arr;

	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == arr[j]) {
				break;
			}
		}
	}



	return 0;
}