#include <stdio.h>
int main(void) {
	char moji[100],f;
	int a, b;

	printf("���p������ > ");
	gets(moji);

	printf("���ԖڂƉ��Ԗڂ̕��������ւ��܂����H > ");
	scanf("%d%d", &a, &b);

	f = moji[a];
	moji[a] = moji[b];
	moji[b] = f;

	printf("����ւ���̕�����\n");
	for (int i = 0; i <= 100; i++) {
		if (moji[i] != '\0') {
			printf("%c", moji[i]);
		}
		else {
			printf("\n");
			break;
		}
	}
	return 0;
}