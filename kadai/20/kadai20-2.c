#include <stdio.h>

int kakezan(int a, int b);

void main(void){
	int a, b, kotae;
	printf("���� a �̒l�́H > ");
	scanf("%d", &a);
	printf("���� b �̒l�́H > ");
	scanf("%d", &b);

	kotae = kakezan(a, b);
	printf("a �� b �̐ς� %d �ł��B\n", kotae);
}

int kakezan(int a, int b) {
	int c;
	c = a * b;
	return c;
}
