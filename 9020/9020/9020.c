#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int a;
	int *arr;
	int x=0, y=0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		int* arr = (int*)malloc(sizeof(int) * a);
		int len;
		
		len = a;

		//arr��� �迭�� 2���� n-1������ ���� �ִ´�.
		for (int i = 2; i < a; i++) {
			arr[i - 2] = i;
		}

		
		//arr��� �迭�� �Ҽ��� �����. �Ҽ��� �ƴ� ���� �߰ߵǾ��� ��, �ڿ��ִ� ���� �����. ������� [2,3,4,5,6,7]�� [2,3,5,6,7]��, �� ������
		// [2,3,5,7]�� ���� ���·� ���̴�. 
		//���⼭ �ð��ʰ��� ���� �ʰ� �ϱ����ؼ� �Ҽ��� ���ϴ� �������� �ε�ȣ ���� �� ��������� �Ѵ�.
		for (int i = 0; i < len-2; i++) {
			for (int j = 2; j*j <= arr[i]; j++) {
				if (arr[i] % j == 0) {
					for (int k = i; k < len - 2; k++) {
						arr[k] = arr[k + 1];
					}
					len--;
				}
			}
		}
		
		

		//x,y�� ���� arr�� �ڽ��� ���� ���Ѵ�. �׸��� x,y�� �ִ´�. �̶� �������� ��Ƽ���� �������� ��� �ڿ������� ���̰� ���� ������ ��µȴ�. 
		for (int i = 0; i <= (len - 2) / 2; i++) {
			for (int j = i; j < len - 2; j++) {
				if (arr[i] + arr[j] == a) {
						x = arr[i];
						y = arr[j];
						break;
				}
			}
		}

		printf("%d %d", x, y);
		free(arr);
	}

	return 0;


}
