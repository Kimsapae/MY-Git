#include<stdio.h>
#include<math.h>

//7�� ���� �� �������� �Ÿ��� ����ϴ� �Լ��� �ۼ��Ͽ� ����. 2���� �������� �� ��
//������ �Ÿ��� ����ϴ� dist_2d()�� �ۼ��Ͻÿ�

double dist_2d(int x1, int x2, int y1, int y2) {
	int d = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
	double result = sqrt(d);
	return result;
}

int main(void) {
	printf_s("20217607 ��α�\n");
	int x1, x2, y1, y2;

	printf_s("ù��° ���� ��ǥ�� �Է��Ͻÿ�:(x, y)");
	scanf_s("%d %d", &x1, &y1);
	printf_s("�ι�° ���� ��ǥ�� �Է��Ͻÿ�:(x, y)");
	scanf_s("%d %d", &x2, &y2);
	double dist = dist_2d(x1, x2, y1, y2);
	printf_s("���� ������ �Ÿ��� %f�Դϴ�.", dist);
	return 0;

}