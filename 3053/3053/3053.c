#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
	double r;
	double a,b;
	

	scanf("%lf", &r);

	a = M_PI * r * r;

	printf("%lf\n", a);

	b = 2 * r * r;
	printf("%lf\n", b);

	return 0;
}