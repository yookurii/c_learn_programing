#include <stdio.h>
int main(void) {
	char st[80];
	printf("������́H > ");
	gets(st);

	printf("�ǂݍ��񂾕������%s�ł��B\n", st);

	for (int i = 0; i <= 80; i++) {
		if (st[i] != '\0') {
			st[i] = '*';
		}
		else {
			break;
		}
	}
	printf("�u����������̕������%s�ł��B\n", st);
	return 0;
}
