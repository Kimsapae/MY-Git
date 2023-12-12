#include<stdio.h>
//11번문제 중첩 반복문을 사용하여 다음과 같이 출력하는 프로그램을 작성하여 보자.


int main(void) {
	int num,i=0,j;
	printf_s("20217607 김민기\n");
	printf_s("정수를 입력하시오:");
	scanf_s("%d", &num);
	while (i < num) {
		j = 0;
		i++;
		printf_s("\n");
		while (j < i) {
			printf_s("%d ", j+1 );
			j++;
		}
		
	}
	return 0;
}