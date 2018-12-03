#include <stdio.h>
#include <math.h>
int main(void) {
	int a[100];
	printf("®”‚ð‚¢‚­‚Â‚©“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");
	for (int i = 0; i <= 100; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			break;
		}
		else {
		}
	}
	for (int j = 0; j <= 100; j++) {
		if (a[j] != 0) {
			if (a[j] < 0) {
				a[j] = a[j] * -1;
			}
			else {
			}
		}
		else {
			break;
		}
	}
	for (int l = 0; l <= 100; l++) {
		if (a[l] != 0) {
			printf("â‘Î’l‚Í%d\n", a[l]);
		}
		else {
			break;
		}
	}
	return 0;
}
