#include <stdio.h>
int main(void) {
	int a, b, x = 0, n = 0,i;
	printf("��������͂��Ă������� > ");
	scanf("%d", &i);
	for (a = 0; a <= i; a++) {
		for (b = 0; b <= a; b++) {
			x = x + b;
		}
	}
	printf("%d�܂ł̑��a�̍��v��%d�ł��B\n", i, x);
	return 0;
}