#include <stdio.h>
int main(void) {
	int i = 0, x = 0;
	do {
		x = x + 7;
		if (x % 10 <= 5) {
			i = i + x;
			printf("%d\n", x);
		}
		else {
		}
	} while (i < 1000);
	printf("ðŒ‚ð–ž‚½‚·”‚Ì‡Œv‚Í%d‚Å‚·B\n", i);
	return 0;
}