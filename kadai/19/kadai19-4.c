#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char str1[100], str2[100], str3[100];
	int a, b, c;
	printf("������3�� > ");
	scanf("%s%s%s", str1, str2, str3);
	a = strcmp(str1, str2); 
	b = strcmp(str2, str3);  
	if (strcmp(str1, str2) == 0 && strcmp(str2, str3) == 0) {
		printf("3�̕�����͂��ׂē����ł��I�I�I\n");
	}
	else if (strcmp(str1,str2)!=0&&strcmp(str2,str3)!=0&&strcmp(str1,str2)<=0&&strcmp(str1,str3)<=0) {
		printf("�������ōŏ��ɏo�Ă���̂�%s�ł��B\n", str1);
	}
	else if (strcmp(str1, str2) != 0 && strcmp(str2, str3) != 0 && strcmp(str2, str1) <= 0 && strcmp(str2, str3) <= 0) {
		printf("�������ōŏ��ɏo�Ă���̂�%s�ł��B\n", str2);
	}
	else if (strcmp(str1, str2) != 0 && strcmp(str2, str3) != 0 && strcmp(str3, str1) <= 0 && strcmp(str3, str2) <= 0) {
		printf("�������ōŏ��ɏo�Ă���̂�%s�ł��B\n", str3);
	}
	else {
	}
	return 0;
}