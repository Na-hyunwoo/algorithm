#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* arr1, * arr2;
bool tf;

//�� ���� �̷��� �� �ȵǳ�... �̰� ��ʹ� ��¥ ���� �ȵ�. ��� ��� �ϴ°ųİ����
void findNumber(int i,int j, int n) {
	int number=0;
	int mid = i + j / 2;
	if (i == j) {
		if (n == arr1[i]) tf=true;
	}
	else if (i == j - 1) {
		if (arr1[i] == n) tf=true;
		else if (arr1[j] == n) tf=true;
	}
	else {
		findNumber(0, mid, n);
		findNumber(mid + 1, j, n);
	}

	
}

int main() {
	int n1, n2, j;

	scanf("%d", &n1);
	arr1 = (int*)malloc(sizeof(int) * n1);
	for (int i = 0; i < n1; i++) {
		scanf("%d", &arr1[i]);
	}

	scanf("%d", &n2);
	arr2 = (int*)malloc(sizeof(int) * n2);
	for (int i = 0; i < n2; i++) {
		scanf("%d", &arr2[i]);
		findNumber(0, n1 - 1, arr2[i]);
		if (tf == true) {
			printf("1 ");
			tf = false;
		}
		else printf("0 ");
	}



	return 0;
}