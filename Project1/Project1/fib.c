#include<stdio.h>
//13�� ���� �Ǻ���ġ ������ ����ϴ� ���α׷��� �ۼ��غ���. �Ǻ���ġ ������ 0�� 1���� �����ϸ� ���� �� ���� ���Ͽ� �� ���� �����.



int fib(int x) {
	int fib_x;
	if (x <=1) {	
		return x;
	}
	else {
		return fib(x - 1) + fib(x - 2);
	}
		
}

int main(void) {
	int i=0,num;
	printf_s("20217607 ��α�");
	printf_s("�� ��° �ױ��� ���ұ��?:");
	scanf_s("%d", &num);
	while (i < num+1) {
		printf_s("%d, ", fib(i));
		i++;
	}
	return 0;
}
