#include <stdio.h>
#include <string.h>
int main(void) {
	char moji[100];
	char moji2[100];
	char big;
	char small='{';
	int d;

	printf("文字列 > ");
	scanf("%s",moji);
	strcpy(moji2, moji);
	d = 'a' - 'A';
	for (int i = 0; i <= 100; i++) {
		if (moji2[i] != '\0') {
			if (moji2[i] >= 'A'&&moji2[i] <= 'Z') {
				moji2[i] += d;
			}
			else {
				break;
			}
		}
	}
	for (int j = 0; j <= 100; j++) {
		if (moji2[j] != '\0') {
			for (int l = 0; l <= 100; l++) {
				if (moji2[l] != '\0') {
					if (moji2[j] >= moji2[l+1]) {
						big = moji[j];
					}
					else {
					}
				}
				else {
					break;
				}
			}
		}
		else {
		}
	}
	for (int p = 0; p <= 100; p++) {
		if (moji2[p] != '\0') {
			if (moji2[p] < small) {
				small = moji[p];
			}
		}
		else {
			break;
		}
	}
	printf("一番小さいアルファベットは%c、一番大きいアルファベットは%c\n", small,big);
	return 0;
}
