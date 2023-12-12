#include<stdio.h>
#include<string.h>

struct Product
{
	char name[50];
	int price;
	int num;
};

int main(void) {
	printf_s("20217607 김민기\n");
	char  pname[50];
	struct Product product[5] = {
		{"볼펜",2000,10},
		{"연필",1000,20},
		{"공책",3000,5},
		{"샤프",5000,15},
		{"지우개",500,10}
	};
	printf_s("===================\n상품의 이름: ");
	scanf_s("%s", pname, sizeof(pname));
	for (int i = 0; i < 5; i++) {
		if (strcmp(product[i].name, pname) == 0) {
			printf_s("상품의 가격: %d\n상품의 개수: %d\n===================", product[i].price, product[i].num);
			break;
		}
		else if (i == 4) {
			printf_s("\n상품이 없습니다.");
		}
	}
	return 0;

}