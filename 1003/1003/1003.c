#include <stdio.h>

int count_0(int n) {
	if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return 0;
	}
	else {
		return count_0(n - 1) + count_0(n - 2);
	}
}

int count_1(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return count_1(n - 1) + count_1(n - 2);
	}
}

int main() {
	int count,num;

	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf("%d", &num);
		printf("%d %d", count_0(num), count_1(num));
	}


}