#include <stdio.h>
int main(void) {
	int n = 0, i =700;
	while (i <= 1400) {
		n = n + i;
		i = i + 7;
		
	}
	printf("700����1400�܂ł̐����̂����A7�̔{���̘a�� %d �ł��B\n", n);
	return 0;
}