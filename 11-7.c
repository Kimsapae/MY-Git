#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum rps{ ����, ����, �� };

char* rps_name[] = { "����", "����", "��" };

int main() {
    printf_s("20217607 ��α�\n");
    srand(time(NULL));
    int userCh;
    int comCh = rand() % 3;

    printf_s("����(0), ����(1), ��(2)�� �Է��ϼ���: "); 
    scanf_s("%d", &userCh);

    if (userCh == comCh) {
        printf_s("�����ϴ�.");
    }
    else if ((userCh == ���� && comCh == ����)|| (userCh == �� && comCh == ����)|| (userCh == ���� && comCh == ��)) {
        printf_s("�����ϴ�.");
    }
    else {
        printf_s("�̰���ϴ�.");
    }

    return 0;
}
