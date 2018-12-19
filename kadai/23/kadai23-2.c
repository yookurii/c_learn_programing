#include <stdio.h>
int main(void) {
	int i;
	double ary[10], t=0.0;

	printf("実数10個 > ");
	for (i = 0; i <= 9; i++) {
		scanf("%lf", &ary[i]);
	}

	printf("ローテーション前\n");
	for (i = 0; i < 9; i++) {
		printf("%.2f, ", ary[i]);
	}
	printf("%.2f\n", ary[9]);

	for (i = 9; i >= 0; i--) {
		if (i == 9) {
			t = ary[i];
		}
		else {
			ary[i + 1] = ary[i];
		}
	}
	ary[0] = t;


	printf("ローテーション後\n");
	for (i = 0; i < 9; i++) {
		printf("%.2f, ", ary[i]);
	}
	printf("%.2f\n", ary[9]);

	return 0;
}