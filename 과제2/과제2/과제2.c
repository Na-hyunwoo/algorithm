/*��ǰ ��÷�� ���� N���� ��ȣ(0���� ū ����)���� �ִ�. �� ��ȣ���� 1���� N������ ������ ���� �ϳ����� �Ѵ�.  
�� ��ȣ�� �� ���� ��ȣ�� �ִ����� ã�Ƴ��� �˰����� ��ü���̰� ��Ȯ�ϰ� ����϶�. 
�ۼ��� �˰����� �ð����⵵�� ��(Theta)-ǥ��� ��Ÿ����.*/

#include <stdio.h>


int main() {
	int arr[7] = { 5,4,3,2,2,1,1 };
	int temp;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6-i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 7; i++) {
		printf("%d", arr[i]);
	}

	for (int i = 0; i < 7; i++) {
		if (arr[i] != i + 1) {
			printf("��ȣ�� �������ϴ�.\n");
			break;
		}
	}



	return 0;
}