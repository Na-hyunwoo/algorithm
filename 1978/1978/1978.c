#include <stdio.h>

int main() {
	int a,n;
	int count ;

	scanf("%d", &n);
	count = n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a == 1) count--;
		for (int j = 2; j < a; j++) {
			if (a % j == 0) {
				count--;
				
				break;
			}
			else {
				continue;
			}
		}
		
	}


	printf("%d", count);


	return 0;
}