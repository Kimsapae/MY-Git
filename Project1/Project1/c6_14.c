#include<stdio.h>
//1*1+2*2+3*3+...+n*n�� ���� ����Ͽ� ����.

int main(void) {
	int i=0,result = 0,num;
	printf_s("20217607 ��α�\n");
	printf_s("n�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	while (i < num+1) {
		result = result + i * i;
		i++;
	}
	printf_s("��갪�� %d�Դϴ�.", result);
	return 0;
}