#include <stdio.h>
int main(void) {
	int i;
	for (i = 100; i >= 1; i--) {
		if (i % 9 == 0) {
			printf("%d ��9�̔{���ł��B\n", i);
		}
		else {
		}
	}
	return 0;
}