#include<stdio.h>

// 5번문제 본문에 등장한 소수인지를 검사하는 함수 check_prime()를 사용하여 1부터 100 사이에 존재하는 소수들을 모드 출력하는 프로그램을 작성한다.

int check_prime(int);

int main(void) {
	printf_s("20217607 김민기\n");
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