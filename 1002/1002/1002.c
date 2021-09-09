#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int x1, y1, r1, x2, y2, r2;
	int d;
	int dif;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = sqrt((x1-x2)* (x1 - x2)+ (y1 - y2) * (y1 - y2));
		
		if (r1 > r2) {
			dif = r1 - r2;
		}
		else {
			dif = r2 - r1;
		}

		if (d == 0) {
			if (r1 == r2) {
				printf("-1\n");
			}
			else {
				printf("0\n");
			}
		}
		else if (d > 0) {
			if (r1 + r2 < d) {
				printf("0\n");
			}
			else if (r1 + r2 == d) {
				printf("1\n");
			}
			//여기서 문제가 발생하는 것으로 보여
			else {
				if (dif < d) {
					printf("2\n");
				}
				else if (dif == d) {
					printf("1\n");
				}
				else {
					printf("0\n");
				}
			}
		}

	}

	return 0;
}