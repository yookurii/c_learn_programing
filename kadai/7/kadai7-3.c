#include <stdio.h>
int main(void) {
	int n = 1, i = 0;
	while (n <= 100) {
		i = i + n;
		n++;	
	}
	printf("1から100の整数の和は %d です。\n", i);
	return 0;
}