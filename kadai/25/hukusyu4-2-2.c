#include <stdio.h>
#include <string.h>
int main(void) {
	int len;
	char str[100] = "AAA", str2[100], str3[100], str4[100];
	printf("•¶š—ñ > ");
	scanf("%s", str2);
	strcat(str, str2);

	printf("•¶š—ñ > ");
	scanf("%s", str3);
	strcat(str, str3);

	printf("•¶š—ñ > ");
	scanf("%s", str4);
	strcat(str, str4);

	printf("‘S‚Ä˜AŒ‹‚µ‚½•¶š—ñ‚Í%s‚Å‚·B\n", str);


	return 0;
}