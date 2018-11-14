#include <stdio.h>
int main(void) {
	int x[10],i,j,n,m;
	for (i = 0; i <= 9; i++) {
		printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");
		scanf("%d", &n);
		x[i] = n;
	}
	printf("“ü—Í‚³‚ê‚½®”‚ÍA");
	for (j = 0; j <= 9; j++) {
		m = x[j];
		printf("%d ", m);
	}
	printf("‚Å‚·B\n");
	return 0;
}