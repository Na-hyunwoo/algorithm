#include <stdio.h>
#include <string.h>

int main() {
	// '-'를 기준으로 나눈다. 나머지는 다 더하면 됨. 그럼 이걸 해결하려면
	// '-'는 십진법으로 45 !
	/*
	1. '-'를 기준으로 문자열을 나눈다. 
	2. '+"를 기준으로 문자열을 나눈다.
	3. '-'를 기준으로 나눈 문자열 중, 정수 부분에 해당하는 문자열을 모두 더한다. 
	4. '-'연산을 실행한다. 
	*/
	//c언어로 문자열을 다루는건 너무 힘든 일이야 ㅠ

	char str[50];
	int minus[50] = { 0, }; //-의 위치를 기억하는 배열
	int plus[50] = { 0, }; //+의 위치를 기억하는 배열
	int sum[50] = { 0, }; //-로 나눠진 블록들의 합. 
	int count = 0;//temp의 인덱스
	int plus[50] = { 0, };// 총 합. 
	int result = 0; //최종 결과 값

	gets(str);

	printf("str:%s\n", str);
	printf("strlen(str): %d\n", strlen(str));

	for(int i = 0; i<strlen(str); i++) {
		if (str[i] == '-') {
			minus[count] = i;
			count++;
		}
	}
	printf("-의 개수:%d\n", count);
	for (int i = 0; i < strlen(minus); i++) {
		printf("-의 위치: %d\n", minus[i]);
	}

	//-를 기준으로해서 나눠졌으니까. 그 나눠진 부분에 있는 문자열을 모조리 더하는데, 더할 때, 정수형으로 형 변환한다음에 더해야함. 
	//그럼 쪼개진 부분을 배열로 또 다시 나눠야 하는데, 그걸 또 배열로 만들어서 넣으면 되지. 
	
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