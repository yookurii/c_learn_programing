#include <stdio.h>
int main(void) {
	int i, x = 0;
	for (i = 123; i <= 456; i++) {
		if (i % 3 == 0) {
			x = x + i;
		}
		else {
		}
	}
	printf("123����456�܂ł̐����̂����A3�̔{���̘a��%d�ł��B\n", x);
	return 0;
}