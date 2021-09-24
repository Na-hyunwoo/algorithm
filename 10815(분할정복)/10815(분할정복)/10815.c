#include <stdio.h>
#include <stdlib.h>

int* arr1, * arr2;

//하 뭐가 이렇게 잘 안되냐... 이게 재귀는 진짜 뜻대로 안돼. 재귀 어떻게 하는거냐고오오
void findNumber(int i,int j, int n) {
	int number=0;
	int mid = i + j / 2;
	if (i == j) {
		if (n == arr1[i]) number=1;
	}
	else if (i == j - 1) {
		if (arr1[i] == n) number=1;
		else if (arr1[j] == n) number=1;
	}
	else {
		findNumber(0, mid, n);
		findNumber(mid + 1, j, n);
		if (number == 1) printf("1 ");
		else printf("0 ");
	}

	
}

int main() {
	int n1, n2, j;
	int cnt;

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
	}



	return 0;
}