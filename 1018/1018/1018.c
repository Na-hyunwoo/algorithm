#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, m;

	char** arr=NULL;
	char** temp=NULL;

	scanf("%d %d", &n, &m);


	arr = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = (char*)malloc(sizeof(char) * m);
	}
	
	temp = (char*)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		temp[i] = (char*)malloc(sizeof(char) * m);
	}
	

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++){
			scanf("%c", &arr[i][j]);
		}
	}


	//왜 이걸 못하지 바보같이
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 && j == 0) {
				temp[0][0] = arr[0][0];
			}
			else if (j != 0 ) {
				if (temp[i][j - 1] == 'W') {
					temp[i][j] = 'B';
				}
				else if (temp[i][j - 1] == 'B') {
					temp[i][j] = 'W';
				}
			}
			else {
				if (temp[i - 1][j] == 'W') {
					temp[i][j] = 'B';
				}
				else if (temp[i - 1][j] == 'B') {
					temp[i][j] = 'W';
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}



	return 0;
}