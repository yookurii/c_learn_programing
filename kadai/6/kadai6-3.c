#include <stdio.h>
int main(void) {
	int a,b,c,x;
	printf("��������͂��Ă������� �� ");
	scanf("%d%d%d", &a, &b, &c);
	switch (a) {
	case 1:
		x = a + b + c;
		printf("a + b + c �� %d �ł��B\n", x);
		break;
	case 2:
	case 3:
		x = (a + b + c)*-1;
		printf("-a -b -c��%d�ł��B\n",x);
		break;
	case 5:
	case 7:
	case 11:
	case 13:
		x = a * b * c;
		printf("a * b * c �� %d �ł��B\n", x);
		break;
	default:
		x = (a + b)*c;
		printf("(a+b)*c �� %d �ł��B\n", x);
		break;
	}
	return 0;
}