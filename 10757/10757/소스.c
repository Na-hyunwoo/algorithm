#include <stdio.h>
#include <string.h>

int main() {

    char a[10001] = { 0, }, b[10001] = { 0, }, c[10001] = { 0, };
    char sum[10002] = { 0, };
    int len_a, len_b, len, temp, carry = 0;;

    scanf("%s %s", a, b);
    len_a = strlen(a);
    len_b = strlen(b);

    //예를들어 999와 1일 경우 999와 001의 덧셈으로 만들어준다.
    if (len_a >= len_b) {
        len = len_a;
        for (int i = 0; i < len_a - len_b; i++) {
            c[i] = '0';

        }
        for (int i = len_a - len_b; i < len_a; i++) {
            c[i] = b[i - (len_a - len_b)];

        }
    }
    else {
        len = len_b;
        for (int i = 0; i < len_b - len_a; i++) {
            c[i] = '0';

        }
        for (int i = len_b - len_a; i < len_b; i++) {
            c[i] = a[i - (len_b - len_a)];

        }
    }

    //각 자릿수끼리 더해준다.
    if (len_a >= len_b) {
        for (int i = len - 1; i >= 0; i--) {
            temp = a[i] + c[i] - '0' + carry;

            if (temp >= 58) {
                sum[i] = temp - 10;
                carry = 1;
            }
            else {
                sum[i] = temp;
                carry = 0;
            }
        }
        //만약 sum을 해서 자릿수가 늘어나게 될 경우 맨 앞을 1로 채운다. 예를들어 999와 001을 더하면 000이 나오지만 1000이 나오게끔
        if (carry == 1) {
            printf("1");
        }
    }
    else {
        for (int i = len - 1; i >= 0; i--) {
            temp = b[i] + c[i] - '0' + carry;
            if (temp >= 58) {
                sum[i] = temp - 10;
                carry = 1;
            } 
            else{
                sum[i] = temp;
                carry = 0;
            }
        }
        if (carry == 1) {
            printf("1");
        }
    }

    printf("%s\n", sum);


    return 0;
}