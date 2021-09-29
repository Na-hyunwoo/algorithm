#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)    // 오름차순 비교 함수 구현
{
	int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

	if (num1 < num2)    // a가 b보다 작을 때는
		return -1;      // -1 반환

	if (num1 > num2)    // a가 b보다 클 때는
		return 1;       // 1 반환

	return 0;    // a와 b가 같을 때는 0 반환
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