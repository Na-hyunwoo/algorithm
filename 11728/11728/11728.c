#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)    // �������� �� �Լ� ����
{
	int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������

	if (num1 < num2)    // a�� b���� ���� ����
		return -1;      // -1 ��ȯ

	if (num1 > num2)    // a�� b���� Ŭ ����
		return 1;       // 1 ��ȯ

	return 0;    // a�� b�� ���� ���� 0 ��ȯ
}

int main() {
	int n1, n2;
	int* arr1, * arr2,*arr3;
	scanf("%d %d", &n1, &n2);

	arr1 = (int*)malloc(sizeof(int) * n1);
	arr2 = (int*)malloc(sizeof(int) * n2);
	arr3 = (int*)malloc(sizeof(int) * (n1+n2));

	for (int i = 0; i < n1; i++) {
		scanf("%d", &arr1[i]);
	}

	for (int i = 0; i < n2; i++) {
		scanf("%d", &arr2[i]);
	}

	for (int i = 0; i < n1; i++) {
		arr3[i] = arr1[i];
	}

	for (int i = n1; i <n1+ n2; i++) {
		arr3[i] = arr2[i - n1];
	}

	qsort(arr3, n1+n2, sizeof(int), compare);

	
	for (int i = 0; i < n1 + n2; i++) {
		printf("%d ", arr3[i]);
	}

	return 0;
}