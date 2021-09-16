#include <stdio.h>


void star(int x,int y,int n);

//배열과 재귀함수를 사용해보자. 그리는 느낌으로 가자. 
//아니야 결국에는 배열에 다 넣어야지 그림으로 표현될 수 있어. 
//진짜 뭐지 마법인가.
int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			star(i, j, n);
		}
		printf("\n");
	}


	return 0;
}

void star(int x,int y, int n) {

	if ((x/n) % 3 == 1 && (y/n) % 3 == 1) {
		printf(" ");
	}
	else {
		if (n / 3 == 0) printf("*");
		else star(x, y, n / 3);
	}
	
}