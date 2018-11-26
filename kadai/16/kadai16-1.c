#include <stdio.h>
int main(void) {
	int x = 3, y = 1;
	while (x <= 5 && x >= 1 && y <= 5 && y >= 1) {
		printf("x‚Í%d,y‚Í%d‚Å‚·B\n", x, y);
		x = x + 1;
		y = y + 1;
	}
	return 0;
}
