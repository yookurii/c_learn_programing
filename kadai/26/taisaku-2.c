#include <stdio.h>
int main(void) {
	int a=0;
	char mozi;
	char b[5];
	char moji[100];
	printf("‚Ç‚Ì•¶Žš‚ð’T‚·H > ");
	scanf("%c", &mozi);
	printf("”¼Šp•¶Žš—ñ > ");
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
	printf("\'%c\'‚ª”ò‚Ñ”ò‚Ñ‚ÅoŒ»‚·‚é‰ñ”‚Í%d‰ñ‚Å‚·B\n",mozi, a);

	return 0;
}