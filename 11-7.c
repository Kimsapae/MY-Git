#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum rps{ 가위, 바위, 보 };

char* rps_name[] = { "가위", "바위", "보" };

int main() {
    printf_s("20217607 김민기\n");
    srand(time(NULL));
    int userCh;
    int comCh = rand() % 3;

    printf_s("가위(0), 바위(1), 보(2)를 입력하세요: "); 
    scanf_s("%d", &userCh);

    if (userCh == comCh) {
        printf_s("비겼습니다.");
    }
    else if ((userCh == 가위 && comCh == 바위)|| (userCh == 보 && comCh == 가위)|| (userCh == 바위 && comCh == 보)) {
        printf_s("졌습니다.");
    }
    else {
        printf_s("이겼습니다.");
    }

    return 0;
}
