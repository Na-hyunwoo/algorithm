#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, m;

	char** arr;
	char** temp;

	scanf("%c %c", &n, &m);

	*arr = (char*)malloc(sizeof(char) * n);
	arr = (char*)malloc(sizeof(char) * m);

	*temp = (char*)malloc(sizeof(char) * n);
	temp = (char*)malloc(sizeof(char) * m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 && j == 0) {
				temp[0][0] = arr[0][0];
			}
			else if (j == 0) {

			}
			else {
				temp
			}
		}
	}




	return 0;
}