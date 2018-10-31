#include <stdio.h>
int main(void) {
	int answer = 55, i;
	do{
	printf("’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F ");
	scanf("%d", &i);
	if (i == answer) {
		printf("³‰ğI\n");
	}
	else if (i < answer) {
		printf("“š‚¦‚Í %d ‚æ‚è‘å‚«‚¢‚Å‚·\n",i);
	}
	else if (i > answer) {
		printf("“š‚¦‚Í %d ‚æ‚è¬‚³‚¢‚Å‚·\n",i);
	}
	}while(i != 55);
	return 0;
}