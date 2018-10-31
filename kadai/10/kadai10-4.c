#include <stdio.h>
int main(void) {
	int i;
	printf("整数を入力してね > ");
	scanf("%d", &i);
	if (i >= 512 && i < 1024) {
		if (i % 3 == 0) {
			printf("Aです。\n");
		}
		else if (i % 3 == 1) {
			printf("Bです。\n");
		}
		else if (i % 3 == 2) {
			printf("Cです。\n");
		}
	}
	else {
		printf("整数外の整数です。\n");
	}
	return 0;
}