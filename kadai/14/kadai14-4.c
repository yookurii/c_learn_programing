#include <stdio.h>
int main(void) {
	int x[4][9] = { {1,2,3,4,5,6,7,8,9},
				 {11,12,13,14,15,16,17,18,19},
				 {21,22,23,24,25,26,27,28,29},
				 {31,32,33,34,35,36,37,38,39} };
	int z[4][9] = { {0,0,0,0,0,0,0,0,0},{ 0,0,0,0,0,0,0,0,0 },{ 0,0,0,0,0,0,0,0,0 },{ 0,0,0,0,0,0,0,0,0 } };
	int a = 3, d = 8;

	for (int i = 0; i < 4; i++) {
		printf("%ds–Ú > ", i+1);
		for (int j = 0; j < 9; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	for (int n = 0; n < 2; n++) {
		for (int m = 0; m < 9; m++) {
			z[0][0] = x[n][m];
			x[n][m] = x[a][m];
			x[a][m] = z[0][0];
		}
		a = a - 1;
	}
	for (int b = 0; b < 4; b++) {
		for (int c = 0; c < 4; c++) {
			z[0][0] = x[b][c];
			x[b][c] = x[b][d];
			x[b][d] = z[0][0];
			d = d - 1;
		}
		d = 8;
	}
	for (int o = 0; o < 4; o++) {
		printf("%ds–Ú > ", o + 1);
		for (int p = 0; p < 9; p++) {
			printf("%d ", x[o][p]);
		}
		printf("\n");
	}
	return 0;
}