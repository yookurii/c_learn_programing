#include <stdio.h>
#define LAST 3
#define P printf
int main(void) {
	int a,b=0;
	printf("%d�񐮐�����͂��Ă�������\n",LAST);
	for (int i = 1; i <= LAST; i++) {
		P(" > ");
		scanf("%d", &a);
		b += a;
	}
	P("���v�l�� %d �ł��B\n",b);
}