#include<stdio.h>
//16�� ���� ����ڰ� �Է��� ���� �Ҽ����� �ƴ����� ����ϴ� ���α׷��� �ۼ��Ͽ���.

int main(void) {
	int i = 2, num,num_case;
	printf_s("20217607 ��α�\n");
	printf_s("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);
	num_case = num % 10; //������ ���� �ڸ��� ����

	switch (num_case) { //������ ���� �ڸ��� ���� ���縦 ����
	case 1: case 3: case 6: case 7: case 8: case 0:
		while (i < num + 1) {
			if (i == num) {
				printf_s("%d�� �Ҽ��Դϴ�.", num);
				break;
			}
			else if (num % i == 0 || num == 1) {
				printf_s("%d�� �Ҽ��� �ƴմϴ�.", num);
				break;
			}
			i++;
		}
		break;
	case 2: case 4: case 5: case 9:
		while (i < num + 1) {
			if (i == num) {
				printf_s("%d�� �Ҽ��Դϴ�.", num);
				break;
			}
			else if (num % i == 0) {
				printf_s("%d�� �Ҽ��� �ƴմϴ�.", num);
				break;
			}
			i++;
		}
		

	}
	return 0;
}