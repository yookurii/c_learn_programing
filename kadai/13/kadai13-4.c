#include <stdio.h>
int main(void) {
	int x[20],i,j,l,n=19,m,o,p;
	for (i = 0; i <= 19; i++) {
		x[i] = i;
	}
	printf("現在、配列の値は、\n");
	for (l = 0; l <= 19; l++) {
		o = x[l];
		printf("%d ", o);
	}
	printf("\nです。\n\n");
	for (j = 0; j <= 10; j++) {
		m = x[j];
		x[j] = x[n];
		x[n] = m;
		n = n - 1;
	}
	printf("逆順に並び替えると、配列の値は、\n");
	for (p = 0; p <= 19; p++) {
		o = x[p];
		printf("%d ", o);
	}
	printf("\nです。\n");
	return 0;
}