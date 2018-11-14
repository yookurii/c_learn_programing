#include <stdio.h>
int main(void) {
	int x[4][6] = { {0,0,0,0,4,0},{0,11,0,0,0,0},{0,0,22,0,0,25} };
	int j, i, n;
	for (i = 0; i <= 3; i++) {
		for (j = 0; j <= 5; j++) {
			if (x[i][j] != 0) {
				n = x[i][j];
				printf("x[%d][%d]‚Ì’l‚Í%d‚Å‚·B\n", i, j, n);
			}
			else {
				continue;
			}
		}
	}
	return 0;
}