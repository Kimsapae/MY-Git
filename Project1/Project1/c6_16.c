#include<stdio.h>
//16번 문제 사용자가 입력한 수가 소수인지 아닌지를 출력하는 프로그램을 작성하여라.

int main(void) {
	int i = 2, num,num_case;
	printf_s("20217607 김민기\n");
	printf_s("정수를 입력하시오: ");
	scanf_s("%d", &num);
	num_case = num % 10; //정수의 일의 자리를 구함

	switch (num_case) { //정수의 일의 자리를 통해 조사를 구별
	case 1: case 3: case 6: case 7: case 8: case 0:
		while (i < num + 1) {
			if (i == num) {
				printf_s("%d은 소수입니다.", num);
				break;
			}
			else if (num % i == 0 || num == 1) {
				printf_s("%d은 소수가 아닙니다.", num);
				break;
			}
			i++;
		}
		break;
	case 2: case 4: case 5: case 9:
		while (i < num + 1) {
			if (i == num) {
				printf_s("%d는 소수입니다.", num);
				break;
			}
			else if (num % i == 0) {
				printf_s("%d는 소수가 아닙니다.", num);
				break;
			}
			i++;
		}
		

	}
	return 0;
}