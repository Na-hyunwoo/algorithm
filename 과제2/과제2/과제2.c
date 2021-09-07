/*경품 추첨을 위한 N개의 번호(0보다 큰 정수)들이 있다. 이 번호들은 1부터 N사이의 정수들 중의 하나여야 한다.  
이 번호들 중 빠진 번호가 있는지를 찾아내는 알고리즘을 구체적이고 명확하게 기술하라. 
작성한 알고리즘의 시간복잡도를 θ(Theta)-표기로 나타내라.*/

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
			printf("번호가 빠졌습니다.\n");
			break;
		}
	}



	return 0;
}