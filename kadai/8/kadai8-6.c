#include <stdio.h>
int main(void) {
	double x=0.0, d;
	do {
		printf("��������� > ");
		scanf("%lf", &d);
		x = x + d;
	} while (x<100.0&&x>=-100.0);
	printf("�����̍��v�� %f �ł��B\n", x);
	return 0;
}