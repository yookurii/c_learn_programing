#include <stdio.h>
int main(void) {
	int a[100], x,b,c;
	printf("��������͂��Ă������� > ");
	scanf("%d", &x);

	b= x % 10;
	c= x % 1 00;
	printf("%d\n", b);
	printf("%d\n", c);
	return 0;
}