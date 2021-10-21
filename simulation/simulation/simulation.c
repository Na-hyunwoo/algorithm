#include <stdio.h>

int shortPath(int i, int j, int C[][6]) {
	if (i == 1) return 1;
	else if (j == 1) return 1;
	else return ( C[i][j - 1] * shortPath(i,j-1,C) + C[i - 1][j] * shortPath(i-1, j , C) );
}


int main() {
	
	int P[7][6] = { 0, }; //인덱스 값을 실제와 맞추기 위해서, 인덱스 값을 각각 1씩 증가시켰다. 
	int C[7][6] ;

	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 5; j++) {
			C[i][j] = 1;
		}
	}

	C[1][5] = 0;
	C[3][3] = 0;
	C[5][2] = 0;


	printf("%d ",shortPath(6, 5, C));

	/*
	for (int i = 1; i <= 6; i++) P[i][1] = 1;
	for (int i = 1; i <= 5; i++) P[1][i] = 1;

	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 5; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 2; i <= 6; i++) {
		for (int j = 2; j <= 5; j++) {
			P[i][j] = C[i][j - 1] * P[i][j - 1] + C[i - 1][j] * P[i - 1][j];
		}
	}

	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 5; j++) {
			printf("%d ", P[i][j]);
		}
		printf("\n");
	}
	
	printf("%d", P[6][5]);

	*/

	return 0;
}