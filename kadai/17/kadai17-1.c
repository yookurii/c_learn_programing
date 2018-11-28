#include <stdio.h>
int main(void) {
	char str[6] = "Train";
	printf("編集前の文字列：%s\n", str);
	str[2] = 'A';
	str[4] = 'N';
	printf("編集後の文字列：%s\n", str);
	return 0;
}
