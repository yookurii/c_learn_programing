#include <stdio.h>
int main(void) {
	int a, b,ary[11];
	
	printf("���� > ");
	scanf("%d%d%d%d%d%d%d%d%d%d", &ary[1], &ary[2], &ary[3], &ary[4], &ary[5], &ary[6], &ary[7], &ary[8], &ary[9], &ary[10]);

	printf("���Ԗڂ��牽�Ԗڂ܂ŕ\������H > ");
	scanf("%d%d", &a, &b);
	if (a >= 1 && b <= 10 && a < b) {
		printf("�\�����鐮���� ");
		for (int j = a; j <= b; j++) {
			printf("%d ", ary[j]);
		}
		printf("�ł��B\n");
	}
	else {
		printf("�ԍ����s���ł��B\n");
	}

	return 0;
}