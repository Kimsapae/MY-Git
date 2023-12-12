#include<stdio.h>
//1*1+2*2+3*3+...+n*n의 값을 출력하여 보자.

int main(void) {
	int i=0,result = 0,num;
	printf_s("20217607 김민기\n");
	printf_s("n의 값을 입력하시오: ");
	scanf_s("%d", &num);

	while (i < num+1) {
		result = result + i * i;
		i++;
	}
	printf_s("계산값은 %d입니다.", result);
	return 0;
}