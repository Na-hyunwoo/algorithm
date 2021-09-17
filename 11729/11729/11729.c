#include <stdio.h>
#include <math.h>


//이거는 뭐 어떻게 접근을 해야할지 감조차 잡히지가 않는데. 
int main() {
	int n;
	int cnt;

	scanf("%d", &n);
	
	cnt = pow(2, n) - 1;

	printf("%d\n", cnt);

	return 0;
}