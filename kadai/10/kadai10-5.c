#include <stdio.h>
int main(void) {
	double a;
	int b=0,i;
	do {
		printf("�����́H > ");
		scanf("%lf", &a);
		if (a >= 1.0) {
			b = a;
			for (i = 1; i <= b; i++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			printf("1.0�����̐������͂��ꂽ�̂ŁA�I�����܂��B\n");
			break;
		}
	} while (1);
	return 0;
}