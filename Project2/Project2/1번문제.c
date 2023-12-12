#include<stdio.h>



//4번 문제

void get(double value, int* i_part, double* f_part) {
    *i_part = (int)value;
    *f_part = value - *i_part;
}

int main(void) {
    double value;
    int i_part;
    double f_part;
    printf_s("20217607 김민기\n");
    printf_s("전달받은실수=");
    scanf_s("%lf", &value);

    get(value, &i_part, &f_part);

    printf_s("정수부=%d\n소수부=%f", i_part ,f_part);

    return 0;
}