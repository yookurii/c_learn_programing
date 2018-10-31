#include <stdio.h>
int main(void) {
	int i;
	while (1) {
		printf("•‰”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
		scanf("%d", &i);
		if (i < 0) {
			printf("%d‚ª“ü—Í‚³‚ê‚Ü‚µ‚½\n", i);
			break;
		}
		else {
			printf("%d‚Í•‰”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n", i);
			continue;
		}
	}
	return 0;
}