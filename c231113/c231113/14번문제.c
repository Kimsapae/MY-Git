#include<stdio.h>

//14�� ���� 1^3 + 2^3+....+n^3�� ����ϴ� ��ȯ���� ���α׷��� �ۼ��Ͽ���
int power3(int);


int main(void) {
	printf_s("20217607 ��α�\n");
	int n;
	printf_s("������ �Է��Ͻÿ�: ");
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