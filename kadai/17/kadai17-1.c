#include <stdio.h>
int main(void) {
	char str[6] = "Train";
	printf("�ҏW�O�̕�����F%s\n", str);
	str[2] = 'A';
	str[4] = 'N';
	printf("�ҏW��̕�����F%s\n", str);
	return 0;
}
