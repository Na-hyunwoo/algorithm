#include <stdio.h>
#include <string.h>

int main() {
	// '-'�� �������� ������. �������� �� ���ϸ� ��. �׷� �̰� �ذ��Ϸ���
	// '-'�� ���������� 45 !
	/*
	1. '-'�� �������� ���ڿ��� ������. 
	2. '+"�� �������� ���ڿ��� ������.
	3. '-'�� �������� ���� ���ڿ� ��, ���� �κп� �ش��ϴ� ���ڿ��� ��� ���Ѵ�. 
	4. '-'������ �����Ѵ�. 
	*/
	//c���� ���ڿ��� �ٷ�°� �ʹ� ���� ���̾� ��

	char str[50];
	int minus[50] = { 0, }; //-�� ��ġ�� ����ϴ� �迭
	int plus[50] = { 0, }; //+�� ��ġ�� ����ϴ� �迭
	int sum[50] = { 0, }; //-�� ������ ��ϵ��� ��. 
	int count = 0;//temp�� �ε���
	int plus[50] = { 0, };// �� ��. 
	int result = 0; //���� ��� ��

	gets(str);

	printf("str:%s\n", str);
	printf("strlen(str): %d\n", strlen(str));

	for(int i = 0; i<strlen(str); i++) {
		if (str[i] == '-') {
			minus[count] = i;
			count++;
		}
	}
	printf("-�� ����:%d\n", count);
	for (int i = 0; i < strlen(minus); i++) {
		printf("-�� ��ġ: %d\n", minus[i]);
	}

	//-�� ���������ؼ� ���������ϱ�. �� ������ �κп� �ִ� ���ڿ��� ������ ���ϴµ�, ���� ��, ���������� �� ��ȯ�Ѵ����� ���ؾ���. 
	//�׷� �ɰ��� �κ��� �迭�� �� �ٽ� ������ �ϴµ�, �װ� �� �迭�� ���� ������ ����. 
	
	for (int i = 0; i < minus[0]; i++) {
		if (str[i] != '+') plus[0] += (int)str[i];
	}

	if (strlen(minus) >= 2) {
		for (int i = 0; i < strlen(minus); i++) {
			for (int j = minus[i] + 1; j < minus[i + 1]; j++) {
				if (str[i] != '+') {
					//printf("%d ", (int)str[j]);
					plus[i + 1] += (int)str[j];
				}
			}
		}
	}

	result = plus[0];
	for (int i = 0; i < strlen(minus); i++) {
		result -= plus[i + 1];
	}
	
	printf("%d", result);

	return 0;
}