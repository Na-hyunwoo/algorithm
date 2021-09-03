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

		//arr라는 배열에 2부터 n-1까지의 수를 넣는다.
		for (int i = 2; i < a; i++) {
			arr[i - 2] = i;
		}

		
		//arr라는 배열에 소수만 남긴다. 소수가 아닌 수가 발견되었을 때, 뒤에있는 수를 땡긴다. 
		//여기서 시간초과가 나지 않게 하기위해서 소수를 구하는 과정에서 부등호 값을 잘 설정해줘야 한다.
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
		
		

		//x,y에 합이 arr그 자신인 값을 구한다. 그리고 x,y에 넣는다. 
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
