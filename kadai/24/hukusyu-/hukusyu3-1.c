#include <stdio.h>

int main(void)
{
	
	int n;
	double ary[5];
	
	printf("整数を３個入力して > ");
	scanf("%lf %lf %lf %lf %lf", &ary[0], &ary[1], &ary[2], &ary[3], &ary[4]);

	printf("何番目の要素を表示する？ > ");
	scanf("%d", &n);

	printf("%d 番目の要素は %f です！\n", n, ary[n]);

	return 0;
}
