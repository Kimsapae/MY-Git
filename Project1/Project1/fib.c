#include<stdio.h>
//13번 문제 피보나치 수열을 계산하는 프로그램을 작성해보자. 피보나치 수열은 0과 1부터 시작하며 앞의 두 수를 더하여 뒤 수를 만든다.



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
	printf_s("20217607 김민기");
	printf_s("몇 번째 항까지 구할까요?:");
	scanf_s("%d", &num);
	while (i < num+1) {
		printf_s("%d, ", fib(i));
		i++;
	}
	return 0;
}
