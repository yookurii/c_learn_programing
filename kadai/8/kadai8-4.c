#include <stdio.h>
int main(void) {
	int a, b, i=0, x=0;
	printf("a��b����͂��Ă������� �� ");
	scanf("%d%d", &a, &b);
	if (a < b) {
		for (i = a; i <= b; i++) {
			x = x + i;
		}
	}
	else if (a > b) {
		for (i = a; i >= b; i--) {
			x = x + i;
		}
	}
	else if(a==b){
		x = a;
	}
	printf("%d����%d�܂ł̐����̘a��%d�ł��B\n", a, b, x);
	return 0;
}