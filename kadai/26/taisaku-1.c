#include <stdio.h>
int main(void) {
	int a, b,ary[11];
	
	printf("整数 > ");
	scanf("%d%d%d%d%d%d%d%d%d%d", &ary[1], &ary[2], &ary[3], &ary[4], &ary[5], &ary[6], &ary[7], &ary[8], &ary[9], &ary[10]);

	printf("何番目から何番目まで表示する？ > ");
	scanf("%d%d", &a, &b);
	if (a >= 1 && b <= 10 && a < b) {
		printf("表示する整数は ");
		for (int j = a; j <= b; j++) {
			printf("%d ", ary[j]);
		}
		printf("です。\n");
	}
	else {
		printf("番号が不正です。\n");
	}

	return 0;
}