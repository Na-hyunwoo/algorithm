#include <stdio.h>]

int main(){
	int count;
	int x, y;

	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf("%d %d", &x, &y);
		if (y - x == 1) {
			printf("1");
			break;
		}
		if (y - x == 2) {
			printf("2");
			break;
		}
		if (y - x == 3 || y-x==4) {
			printf("3");
			break;
		}
		if (y - x == 5 ||y-x==6) {
			printf("4");
			break;
		}


	}




}