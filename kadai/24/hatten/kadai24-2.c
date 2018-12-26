#include <stdio.h>
int main(void) {
	int dataArray[4][5] = { {60,87,31,54,44},{58,71,23,9},{46,21,68,37,88},{36,12,33,9,7} };
	int datatemp[4] = {0,0,0,0};
	int a = 0;
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 5; j++) {
			if (dataArray[i][j] >= datatemp[a]) {
				datatemp[a] = dataArray[i][j];
			}
			else {
			}
		}
		a += 1;
	}
	printf("Å‘å’l‚Í ");
	for (int b = 0; b < 4; b++) {
		printf("%d ", datatemp[b]);
	}
	printf("‚Å‚·B\n");
	return 0;
}