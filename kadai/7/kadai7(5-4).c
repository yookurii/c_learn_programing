#include <stdio.h>
int main(void) {
	int m=0;
	while(m>=4||m<=0) {
		printf("1 2 3 ‚Ì‚Ç‚ê‚©‚ð“ü—Í");
		scanf("%d", &m);
	}
	switch (m) {
	case 1:
		printf("Solo\n");
		break;
	case 2:
		printf("Duo\n");
		break;
	case 3:
		printf("Trio\n");
		break;
	}
	return 0;
}