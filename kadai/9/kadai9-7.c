#include <stdio.h>
int main(void) {
	int a, b, x = 0, n = 0,i;
	printf("®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");
	scanf("%d", &i);
	for (a = 0; a <= i; a++) {
		for (b = 0; b <= a; b++) {
			x = x + b;
		}
	}
	printf("%d‚Ü‚Å‚Ì‘˜a‚Ì‡Œv‚Í%d‚Å‚·B\n", i, x);
	return 0;
}