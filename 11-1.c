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
    strcpy(s1.name, "김민기");
    strcpy(s1.pNumber, "010-1111-1111");
    printf_s("학번: %s, 이름: %s, 전화번호: %s\n", s1.number.sNumber, s1.name, s1.pNumber);

    strcpy(s1.number.rNumber, "960207-1111111");
    strcpy(s1.name, "김민기");
    strcpy(s1.pNumber, "010-1111-1111");
    printf_s("주민등록번호: %s, 이름: %s, 전화번호: %s\n", s1.number.rNumber, s1.name, s1.pNumber);

    return 0;
}
