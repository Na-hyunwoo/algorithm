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
	int temp[50] = { 0, }; //-�� ��ġ�� ����ϴ� �迭
	int sum[50] = { 0, }; //-�� ������ ��ϵ��� ��. 
	int count = 0;//temp�� �ε���
	int plus[50] = { 0, };// �� ��. 
	int result = 0; //���� ��� ��

	gets(str);

	printf("str:%s\n", str);


	for(int i = 0; i<strlen(str); i++) {
		if (str[i] == '-') {
			temp[count] = i;
			count++;
		}
	}

	//-�� ���������ؼ� ���������ϱ�. �� ������ �κп� �ִ� ���ڿ��� ������ ���ϴµ�, ���� ��, ���������� �� ��ȯ�Ѵ����� ���ؾ���. 
	//�׷� �ɰ��� �κ��� �迭�� �� �ٽ� ������ �ϴµ�, �װ� �� �迭�� ���� ������ ����. 
	
	for (int i = 0; i < temp[0]; i++) {
		if (str[i] != '+') plus[0] += (int)str[i];
	}

	if (strlen(temp) >= 2) {
		for (int i = 0; i < strlen(temp); i++) {
			for (int j = temp[i] + 1; j < temp[i + 1]; j++) {
				if (str[i] != '+') plus[i+1] += (int)str[j];
			}
		}
	}

	result = plus[0];
	for (int i = 0; i < strlen(temp); i++) {
		result -= plus[i + 1];
	}
	
	printf("%d", result);

	return 0;
}