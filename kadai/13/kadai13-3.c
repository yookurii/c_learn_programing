#include <stdio.h>
int main(void) {
	int x[10],i,j,n,m;
	for (i = 0; i <= 9; i++) {
		printf("��������͂��Ă������� > ");
		scanf("%d", &n);
		x[i] = n;
	}
	printf("���͂��ꂽ�����́A");
	for (j = 0; j <= 9; j++) {
		m = x[j];
		printf("%d ", m);
	}
	printf("�ł��B\n");
	return 0;
}