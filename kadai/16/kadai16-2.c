#include <stdio.h>
int main(void) {
	int x=5, y=5,a;
	while (x <= 5 && x >= 1 && y <= 5 && y >= 1) {
		printf("x‚Í%d,y‚Í%d‚Å‚·B\n", x, y);
		printf("4,6,2,8‚Ì‚¢‚¸‚ê‚©‚ð“ü—Í > ");
		scanf("%d", &a);
		if (a == 4) {
			x = x - 1;
		}
		if (a == 6) {
			x = x + 1;
		}
		if (a == 2) {
			y = y + 1;
		}
		if (a == 8) {
			y = y - 1;
		}
	}
	return 0;
}