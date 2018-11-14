#include <stdio.h>
int main(void) {
	int sum = 0;
	int value[5][6] = { {5,14,35,19,53},{11,22,28,14,62},
					 {8,62,17,26,98},{14,21,14,31,88} };
	printf("c‚Ì‡Œv‚Í‚»‚ê‚¼‚êA\n");
	for (int j = 0; j <= 4; j++) {
		for (int i = 0; i <= 3; i++) {
			sum = sum + value[i][j];
		}
		printf("%d ", sum);
		sum = 0;
	}
	printf("‚Å‚·B\n");
	return 0;
}