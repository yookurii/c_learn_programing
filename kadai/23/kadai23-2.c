#include <stdio.h>
int main(void) {
	int i;
	double ary[10], t=0.0;

	printf("����10�� > ");
	for (i = 0; i <= 9; i++) {
		scanf("%lf", &ary[i]);
	}

	printf("���[�e�[�V�����O\n");
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


	printf("���[�e�[�V������\n");
	for (i = 0; i < 9; i++) {
		printf("%.2f, ", ary[i]);
	}
	printf("%.2f\n", ary[9]);

	return 0;
}