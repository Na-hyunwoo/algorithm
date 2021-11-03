#include <stdio.h>
#include <string.h>

int main() {
	// '-'를 기준으로 나눈다. 나머지는 다 더하면 됨. 그럼 이걸 해결하려면
	// '-'는 십진법으로 45 !
	//const char * strchr ( const char * str, int ch ); 문자열에 특정 문자가 있는 위치를 찾는 함수
	//const char * strrchr ( const char * str, int ch ); 문자열에 특정 문자가 있는 위치를 뒤에서부터 찾는 함수
	/*
	1. '-'를 기준으로 문자열을 나눈다. 
	2. '+"를 기준으로 문자열을 나눈다.
	3. '-'를 기준으로 나눈 문자열 중, 정수 부분에 해당하는 문자열을 모두 더한다. 
	4. '-'연산을 실행한다. 
	*/
	//c언어로 문자열을 다루는건 너무 힘든 일이야 ㅠ

	char str[50] = { 0, };
	int i = 0; //인덱스
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