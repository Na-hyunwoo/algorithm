#include <stdio.h>
#include <math.h>


//�̰Ŵ� �� ��� ������ �ؾ����� ������ �������� �ʴµ�. 
int main() {
	int n;
	int cnt;

	scanf("%d", &n);
	
	cnt = pow(2, n) - 1;

	printf("%d\n", cnt);

	return 0;
}