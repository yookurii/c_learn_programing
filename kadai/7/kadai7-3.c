#include <stdio.h>
int main(void) {
	int n = 1, i = 0;
	while (n <= 100) {
		i = i + n;
		n++;	
	}
	printf("1����100�̐����̘a�� %d �ł��B\n", i);
	return 0;
}