#include <stdio.h>
#include <string.h>
int main(void) {
	int len;
	char str[100], str2[100];
	printf("������2�� > ");
	scanf("%s%s", str,str2);

	if (strcmp(str,str2)==0) {
		printf("��v���Ă��܂�\n");
	}
	else {
		printf("�Ⴂ�܂�\n");
	}



	return 0;
}