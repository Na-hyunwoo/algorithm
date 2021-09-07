/*경품 추첨을 위한 N개의 번호(0보다 큰 정수)들이 있다. 이 번호들은 1부터 N사이의 정수들 중의 하나여야 한다.  
이 번호들 중 빠진 번호가 있는지를 찾아내는 알고리즘을 구체적이고 명확하게 기술하라. 
작성한 알고리즘의 시간복잡도를 θ(Theta)-표기로 나타내라.*/

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