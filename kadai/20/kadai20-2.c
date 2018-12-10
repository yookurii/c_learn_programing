#include <stdio.h>

int kakezan(int a, int b);

void main(void){
	int a, b, kotae;
	printf("整数 a の値は？ > ");
	scanf("%d", &a);
	printf("整数 b の値は？ > ");
	scanf("%d", &b);

	kotae = kakezan(a, b);
	printf("a と b の積は %d です。\n", kotae);
}

int kakezan(int a, int b) {
	int c;
	c = a * b;
	return c;
}
