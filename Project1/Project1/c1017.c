#include<stdio.h>
//11������ ��ø �ݺ����� ����Ͽ� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͽ� ����.


int main(void) {
	int num,i=0,j;
	printf_s("20217607 ��α�\n");
	printf_s("������ �Է��Ͻÿ�:");
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