#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char v[100] = "", e[100];

	while (1) {
		printf("������ > ");
		gets(e);
		if (!strcmp(e,"end")) {
			break;
		}
		else {
			strcat(v, e);
		}
	}

	printf("�A�������������%s�ł��B\n", v);
	return 0;
}