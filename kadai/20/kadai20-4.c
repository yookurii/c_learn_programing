#include <stdio.h>

int sumAtoB(int a,int b,int c);

void main(void) {
	int a, b, c,sum;
	printf("a�̒l�́H > ");
	scanf("%d", &a);
	printf("b�̒l�́H > ");
	scanf("%d", &b);
	printf("c�̒l�́H > ");
	scanf("%d", &c);

	sum = sumAtoB(a, b, c);

	printf("%d����%d�܂ł̐����ŁA%d�Ŋ���؂����̂̍��v��%d�ł��B\n", a, b, c,sum);
}

int sumAtoB(int a, int b, int c) {
	int sum=0;
	for (int i = a; i <= b; i++) {
		if (i%c == 0) sum += i;
		else;
	}
	return sum;
}