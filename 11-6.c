#include<stdio.h>
#include<string.h>

struct Product
{
	char name[50];
	int price;
	int num;
};

int main(void) {
	printf_s("20217607 ��α�\n");
	char  pname[50];
	struct Product product[5] = {
		{"����",2000,10},
		{"����",1000,20},
		{"��å",3000,5},
		{"����",5000,15},
		{"���찳",500,10}
	};
	printf_s("===================\n��ǰ�� �̸�: ");
	scanf_s("%s", pname, sizeof(pname));
	for (int i = 0; i < 5; i++) {
		if (strcmp(product[i].name, pname) == 0) {
			printf_s("��ǰ�� ����: %d\n��ǰ�� ����: %d\n===================", product[i].price, product[i].num);
			break;
		}
		else if (i == 4) {
			printf_s("\n��ǰ�� �����ϴ�.");
		}
	}
	return 0;

}