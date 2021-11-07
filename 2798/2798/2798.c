#include <stdio.h>
#include <stdlib.h>


//틀렸다는데 뭐가 틀렸다고 하는골까아. 아마 끝 값들을 넣으면 해결될 것 같다. 
int main() {
	int n, m;
	int* sum;
	int* temp;
	int index=0;
	int min;
	int result;
	int* arr;


	scanf("%d %d", &n, &m);

	arr = (int*)malloc(sizeof(int) * n);
	sum = (int*)malloc(sizeof(int) * n * (n - 1) * (n - 2) / 6);
	temp = (int*)malloc(sizeof(int) * n * (n - 1) * (n - 2) / 6);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int z = j + 1; z < n; z++) {
				sum[index] = arr[i] + arr[j] + arr[z];
				index++;
			}
		}
	}

	for (int i = 0; i < index; i++) {
		temp[i] = sum[i];
	}

	
	for (int i = 0; i < index; i++) {
		if ((m - sum[i]) >= 0) {
			sum[i] = m - sum[i];
		}
		else {
			sum[i] = sum[i] - m;
		}
	}

	min = sum[0];

	for (int i = 0; i < index; i++) {
		if (min > sum[i]) {
			min = sum[i];
			result = i;
		}
	}

	printf("%d", temp[result]);

	return 0;
}