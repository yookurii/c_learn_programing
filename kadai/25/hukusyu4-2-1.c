#include <stdio.h>
#include <string.h>
int main(void) {
	int len;
	char str[100], str2[100];

	printf("•¶š—ñ2ŒÂ > ");
	scanf("%s%s", str, str2);

	strcat(str, str2);
	len = strlen(str);

	printf("2‚Â‚Ì•¶š—ñ’·‚Ì‡Œv‚Í%d‚Å‚·B\n", len);
	return 0;
}