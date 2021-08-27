#include <stdio.h>
#include <string.h>

int main() {

    char a[10001] = { 0, }, b[10001] = { 0, }, c[10001] = { 0, };
    char sum[10002] = { 0, };
    int len_a, len_b, len, temp, carry = 0;;

    scanf("%s %s", a, b);
    len_a = strlen(a);
    len_b = strlen(b);

    //������� 999�� 1�� ��� 999�� 001�� �������� ������ش�.
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

    //�� �ڸ������� �����ش�.
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
        //���� sum�� �ؼ� �ڸ����� �þ�� �� ��� �� ���� 1�� ä���. ������� 999�� 001�� ���ϸ� 000�� �������� 1000�� �����Բ�
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