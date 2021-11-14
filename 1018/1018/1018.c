#include <stdio.h>
#include <stdlib.h>


//1을 white, 0을 black으로 만들어볼까. 
int main() {

	int n, m;

	char** arr=NULL;
	int** temp=NULL;

	scanf("%d %d", &n, &m);


	arr = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = (char*)malloc(sizeof(char) * m);
	}
	
	temp = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		temp[i] = (int*)malloc(sizeof(int) * m);
	}
	
	/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++){
			scanf("%c", &arr[i][j]);
		}
	}*/
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%c", &arr[i][j]);
		}
	}
	
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 && j == 0) {
				if (arr[0][0] == 'W') arr[0][0] = 1;
				else arr[0][0] = 0;
			}
			else if (j != 0 ) {
				temp[i][j] = !(temp[i][j - 1]);
			}
			else {
				temp[i][j] = !(temp[i-1][j]);
			}
		}
	}

	printf("\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d", temp[i][j]);
		}
		printf("\n");
	}



	return 0;
}