#include <stdio.h>
int main(void) {
	char a, b, t;

	printf("a �� b �̒l����͂��Ă������� > ");

	scanf("%c", &a);
	scanf("%c", &b);

	printf("�����O\n");
	printf("a = %c, b = %c\n", a, b);

	t = a;
	a = b;
	b = t;

	printf("������\n");
	printf("a = %c, b = %c\n", a, b);

	return 0;
}