#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int x1, y1, r1, x2, y2, r2;
	int d;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = sqrt((x1-x2)* (x1 - x2)+ (y1 - y2) * (y1 - y2));
		
		if (d == 0) {
			if (r1 == r2) {
				printf("-1");
			}
			else {
				printf("0");
			}
		}
		else {
			if (r1 + r2 > d) {
				printf("2");
			}
			else if (r1 + r2 == d) {
				printf("1");
			}
			else {
				printf("0");
			}
		}
	}






	return 0;
}