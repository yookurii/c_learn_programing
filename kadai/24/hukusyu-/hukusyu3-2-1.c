#include <stdio.h>

int main(void)
{
	
	int i, ary[10];

	printf("�����P�O�� > ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &ary[i]);
	}



	printf("�t���ɂ���ƁA");
	for (i = 9; 0 <= i; i--) {
		if (ary[i] % 2 != 0 || i == 9 || i == 0) {
			printf("%d�A", ary[i]);
		}
	}
	printf("�ł��I\n");

	return 0;
}
