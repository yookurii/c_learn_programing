#include <stdio.h>

int three(int a){
	int ret = 3 * a;
	return ret;
}

void main(void) {
	int x, i;
	printf("��������͂��Ă������� > "); scanf("%d", &x);
	i = three(x);
	printf("x��3�{��%d�ł��B\n", i);
}