#include<stdio.h>

// 5������ ������ ������ �Ҽ������� �˻��ϴ� �Լ� check_prime()�� ����Ͽ� 1���� 100 ���̿� �����ϴ� �Ҽ����� ��� ����ϴ� ���α׷��� �ۼ��Ѵ�.

int check_prime(int);

int main(void) {
	printf_s("20217607 ��α�\n");
	for (int j = 2; j <= 100; j++) {
		if (check_prime(j) == 1) printf_s("%d ",j);
	}
}

int check_prime(int n) {
	int is_prime = 1;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			is_prime = 0;
			break;
		}

	}
	return is_prime;
}