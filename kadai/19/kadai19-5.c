#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char v[100] = "", e[100];

	while (1) {
		printf("文字列 > ");
		gets(e);
		if (!strcmp(e,"end")) {
			break;
		}
		else {
			strcat(v, e);
		}
	}

	printf("連結した文字列は%sです。\n", v);
	return 0;
}