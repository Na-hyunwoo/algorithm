#include <stdio.h>
#include <stdlib.h>

int eachNumber(int n) {
	int result=0;
	while (n != 0) {
		result += n % 10;
		n /= 10;
	}

	return result;
}


int main() {
	
	int n;
	int temp; //n�� ������ �ӽ� ����� 
	int len=0; //�Է¹��� ������ ����
	int begin = 0; //�񱳸� ������ ���� ����
	int noOne = 1;

	scanf("%d", &n);

	temp = n;
	while (temp != 0) {	
		temp /= 10;
		len++;
	}

	begin = n - (9 * len);


	for (int i = begin; i <= n; i++) {
		if (n == (i + eachNumber(i))) {
			printf("%d", i);
			noOne = 0;
			break;
		}
	}

	if (noOne) printf("0");

	return 0;
}