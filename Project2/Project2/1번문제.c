#include<stdio.h>



//4�� ����

void get(double value, int* i_part, double* f_part) {
    *i_part = (int)value;
    *f_part = value - *i_part;
}

int main(void) {
    double value;
    int i_part;
    double f_part;
    printf_s("20217607 ��α�\n");
    printf_s("���޹����Ǽ�=");
    scanf_s("%lf", &value);

    get(value, &i_part, &f_part);

    printf_s("������=%d\n�Ҽ���=%f", i_part ,f_part);

    return 0;
}