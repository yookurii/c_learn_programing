#include <stdio.h>
int main(void) {
	int i, x=0, a = 0;
	double b = 0.0,c = 0.0,d=0.0;
	for (i = 1; i <= 10; i++) {
		scanf("%d", &x);
		if (x >= 0) {
			a = a + 1;
			d = x + 0.0;
			b = b + d;
		}
		else {
		}
	}
	if (a >= 1) {
		c = b / a;
		printf("%d�̐����̕��ς� %f �ł��B", a, c);
	}
	else {
		printf("0�ȏ�̐����͂���܂���B\n");
	}
	return 0;
}