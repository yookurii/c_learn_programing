#include <stdio.h>
int main(void) {
	int x[20],i,j,l,n=19,m,o,p;
	for (i = 0; i <= 19; i++) {
		x[i] = i;
	}
	printf("���݁A�z��̒l�́A\n");
	for (l = 0; l <= 19; l++) {
		o = x[l];
		printf("%d ", o);
	}
	printf("\n�ł��B\n\n");
	for (j = 0; j <= 10; j++) {
		m = x[j];
		x[j] = x[n];
		x[n] = m;
		n = n - 1;
	}
	printf("�t���ɕ��ёւ���ƁA�z��̒l�́A\n");
	for (p = 0; p <= 19; p++) {
		o = x[p];
		printf("%d ", o);
	}
	printf("\n�ł��B\n");
	return 0;
}