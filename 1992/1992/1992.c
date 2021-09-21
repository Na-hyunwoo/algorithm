#include <stdio.h>
#include <stdbool.h>

int arr[4096][4096];

void quadTree(int n,int x,int y) {

	bool white=true, black=true;

	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1) white = false;
			if (arr[i][j] == 0) black = false;
		}
	}

	if (white=true) white = false;
	if (black=true) black = false;

	quadTree(n / 2, x, y);
	quadTree(n / 2, x+n/2, y);
	quadTree(n / 2, x, y+n/2);
	quadTree(n / 2, x+n/2, y+n/2);
}


int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	quadTree(n, 0, 0);

	return 0;
}