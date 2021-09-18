#include <stdio.h>
#include <math.h>


//�̰Ŵ� �� ��� ������ �ؾ����� ������ �������� �ʴµ�. 
//����Լ��� Ȯ���� ��¥ ����̱� �ϳ�. �̰� �ƴ°Ŷ� �𸣴°Ŷ� ���̰� ũ���ϳ�. 

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