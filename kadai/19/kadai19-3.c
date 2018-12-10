#include <stdio.h>

int main(void) {
	int d=0;
	char moji[100];
	printf("•¶Žš—ñ > ");
	scanf("%s",moji);
	d = 'a' - 'A';
	for (int i = 0; i <= 100; i++) {
		if (moji[i] != '\0') {
			if (moji[i] == 'SPC') {
				moji[i] = 's';
			}
			else if (moji[i] == 's') {
				moji[i] = 'SPC';
			}
			else if (moji[i] == 'n') {
				moji[i] = '\n';
			}
			else {
				moji[i] += d;
			}
		}
		else {
			
		}
	}
	printf("•ÏŠ·Œã‚Ì•¶Žš—ñ > %s\n",moji);
	return 0;
}