#include <stdio.h>

int three(int a){
	int ret = 3 * a;
	return ret;
}

void main(void) {
	int x, i;
	printf("整数を入力してください > "); scanf("%d", &x);
	i = three(x);
	printf("xの3倍は%dです。\n", i);
}