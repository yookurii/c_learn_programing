#include <stdio.h>
int main(void) {
	char st[80];
	printf("文字列は？ > ");
	gets(st);

	printf("読み込んだ文字列は%sです。\n", st);

	for (int i = 0; i <= 80; i++) {
		if (st[i] != '\0') {
			st[i] = '*';
		}
		else {
			break;
		}
	}
	printf("置き換えた後の文字列は%sです。\n", st);
	return 0;
}
