#include <stdio.h>
int main(void) {
	int i;
	printf("��������͂��Ă� > ");
	scanf("%d", &i);
	if (i >= 512 && i < 1024) {
		if (i % 3 == 0) {
			printf("A�ł��B\n");
		}
		else if (i % 3 == 1) {
			printf("B�ł��B\n");
		}
		else if (i % 3 == 2) {
			printf("C�ł��B\n");
		}
	}
	else {
		printf("�����O�̐����ł��B\n");
	}
	return 0;
}