#include <stdio.h>
#include <string.h>
int main(void) {
	int len;
	char str[100], str2[100];

	printf("������2�� > ");
	scanf("%s%s", str, str2);

	strcat(str, str2);
	len = strlen(str);

	printf("2�̕����񒷂̍��v��%d�ł��B\n", len);
	return 0;
}