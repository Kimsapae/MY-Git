#include <stdio.h>

union Number {
    char rNumber[14]; 
    char sNumber[8]; 
};

struct student {
    union Number number;
    char name[30]; 
    char pNumber[13]; 
};

int main() {
    struct student s1;
    
    strcpy(s1.number.sNumber, "20217607");
    strcpy(s1.name, "��α�");
    strcpy(s1.pNumber, "010-1111-1111");
    printf_s("�й�: %s, �̸�: %s, ��ȭ��ȣ: %s\n", s1.number.sNumber, s1.name, s1.pNumber);

    strcpy(s1.number.rNumber, "960207-1111111");
    strcpy(s1.name, "��α�");
    strcpy(s1.pNumber, "010-1111-1111");
    printf_s("�ֹε�Ϲ�ȣ: %s, �̸�: %s, ��ȭ��ȣ: %s\n", s1.number.rNumber, s1.name, s1.pNumber);

    return 0;
}
