#include <stdio.h>
int main(void) {
	int a=0;
	char mozi;
	char b[5];
	char moji[100];
	printf("�ǂ̕�����T���H > ");
	scanf("%c", &mozi);
	printf("���p������ > ");
	gets(b);
	gets(moji);
	for (int i = 0; i <= 100; i++) {
		if (moji[i] != '\0') {
			if (moji[i] == moji[i + 2]&&moji[i+2]==moji[i+4]) {
				a += 1;
			}
		}
		else {
			break;
		}
	}
	printf("\'%c\'����є�тŏo������񐔂�%d��ł��B\n",mozi, a);

	return 0;
}