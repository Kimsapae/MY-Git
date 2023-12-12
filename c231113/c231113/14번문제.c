#include<stdio.h>

//14번 문제 1^3 + 2^3+....+n^3을 계산하는 순환적인 프로그램을 작성하여라
int power3(int);


int main(void) {
	printf_s("20217607 김민기\n");
	int n;
	printf_s("정수를 입력하시오: ");
	scanf_s("%d", &n);
	printf_s("%d", power3(n));
	return 0;
	
}

int power3(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n * n * n + power3(n - 1);
	}
}