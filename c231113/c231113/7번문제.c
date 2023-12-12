#include<stdio.h>
#include<math.h>

//7번 문제 두 점사이의 거리를 계산하는 함수를 작성하여 보자. 2차원 공간에서 두 점
//사이의 거리를 계산하는 dist_2d()를 작성하시오

double dist_2d(int x1, int x2, int y1, int y2) {
	int d = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
	double result = sqrt(d);
	return result;
}

int main(void) {
	printf_s("20217607 김민기\n");
	int x1, x2, y1, y2;

	printf_s("첫번째 점의 좌표를 입력하시오:(x, y)");
	scanf_s("%d %d", &x1, &y1);
	printf_s("두번째 점의 좌표를 입력하시오:(x, y)");
	scanf_s("%d %d", &x2, &y2);
	double dist = dist_2d(x1, x2, y1, y2);
	printf_s("두점 사이의 거리는 %f입니다.", dist);
	return 0;

}