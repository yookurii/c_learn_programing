#include <stdio.h>

int sumAtoB(int a,int b,int c);

void main(void) {
	int a, b, c,sum;
	printf("aの値は？ > ");
	scanf("%d", &a);
	printf("bの値は？ > ");
	scanf("%d", &b);
	printf("cの値は？ > ");
	scanf("%d", &c);

	sum = sumAtoB(a, b, c);

	printf("%dから%dまでの整数で、%dで割り切れるものの合計は%dです。\n", a, b, c,sum);
}

int sumAtoB(int a, int b, int c) {
	int sum=0;
	for (int i = a; i <= b; i++) {
		if (i%c == 0) sum += i;
		else;
	}
	return sum;
}