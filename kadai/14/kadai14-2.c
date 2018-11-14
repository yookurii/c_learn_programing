#include <stdio.h>
int main(void) {
	double sum = 0.0;
	double value[6][2] = {
		{1.1,0.1},{2.2,0.2},{3.3,0.3},
		{4.4,0.4},{5.5,0.5},{6.6,0.6}
	};
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 1; j++) {
			sum = sum + value[i][j];
		}
	}
	printf("valueの要素の合計は、%fです。\n", sum);
	return 0;
}