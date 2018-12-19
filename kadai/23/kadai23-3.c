#include <stdio.h>
int main(void) {
	char moji[100],f;
	int a, b;

	printf("”¼Šp•¶Žš—ñ > ");
	gets(moji);

	printf("‰½”Ô–Ú‚Æ‰½”Ô–Ú‚Ì•¶Žš‚ð“ü‚ê‘Ö‚¦‚Ü‚·‚©H > ");
	scanf("%d%d", &a, &b);

	f = moji[a];
	moji[a] = moji[b];
	moji[b] = f;

	printf("“ü‚ê‘Ö‚¦Œã‚Ì•¶Žš—ñ\n");
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