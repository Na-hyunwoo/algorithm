#include <stdio.h>
#include <stdlib.h>

int* arr1, * arr2;

void delete() {

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
	}

	for (int i = 0; i < n2; i++) {
		for (j = 0; j < n1; j++) {
			if (arr2[i] == arr1[j]) {
				printf("1 ");
				break;
			}
		}
		if(j==n1) printf("0 ");
	}

	return 0;
}