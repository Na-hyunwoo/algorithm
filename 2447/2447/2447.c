#include <stdio.h>

char star[2200][2200];

void print(int a);

//�迭�� ����Լ��� ����غ���. �׸��� �������� ����. 
//�ƴϾ� �ᱹ���� �迭�� �� �־���� �׸����� ǥ���� �� �־�. 
int main() {
	int n;

	scanf("%d", &n);

	if(n==3) paint(3);
	else {
		for (int i = 0; i < n/3; i++) {
			for (int j = 0; j < n/3; j++) {
				print();
			}
		}
	}


	return 0;
}

void paint(int a) {
	int n = a;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			star[i][j] = '*';
		}
	}

	star[1][1] = ' ';

	
}