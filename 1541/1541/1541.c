#include <stdio.h>
#include <string.h>

int main() {
	// '-'�� �������� ������. �������� �� ���ϸ� ��. �׷� �̰� �ذ��Ϸ���
	// '-'�� ���������� 45 !
	//const char * strchr ( const char * str, int ch ); ���ڿ��� Ư�� ���ڰ� �ִ� ��ġ�� ã�� �Լ�
	//const char * strrchr ( const char * str, int ch ); ���ڿ��� Ư�� ���ڰ� �ִ� ��ġ�� �ڿ������� ã�� �Լ�
	/*
	1. '-'�� �������� ���ڿ��� ������. 
	2. '+"�� �������� ���ڿ��� ������.
	3. '-'�� �������� ���� ���ڿ� ��, ���� �κп� �ش��ϴ� ���ڿ��� ��� ���Ѵ�. 
	4. '-'������ �����Ѵ�. 
	*/
	//c���� ���ڿ��� �ٷ�°� �ʹ� ���� ���̾� ��

	char str[50] = { 0, };
	int i = 0; //�ε���
	int a[50] = { 0, };
	gets(str);

	while (strchr(str, '-') != NULL) {
		int i = 0;
		if(strchr(str,'-')){
			a[i] = strchr(str, '-');
			i++;
			printf("%d", a[i]);
		}
	}

	




	return 0;
}