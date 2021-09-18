#include <stdio.h>
#include <math.h>


//이거는 뭐 어떻게 접근을 해야할지 감조차 잡히지가 않는데. 
//재귀함수가 확실히 진짜 대박이긴 하네. 이게 아는거랑 모르는거랑 차이가 크긴하네. 

void move(int n, int from, int to, int by) {
	if (n == 1) {
		printf("%d %d\n", from, to);
		return ;
	}

	move(n - 1, from, by, to);
	printf("%d %d\n", from, to);
	move(n - 1, by, to, from);

}

int main() {
	int n;
	int cnt;

	scanf("%d", &n);
	
	cnt = pow(2, n) - 1;

	printf("%d\n", cnt);

	move(n, 1, 3, 2);

	return 0;
}