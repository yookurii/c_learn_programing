#include <stdio.h>
#include <string.h>
int main(void) {
	int len;
	char str[100], str2[100];
	printf("•¶Žš—ñ2ŒÂ > ");
	scanf("%s%s", str,str2);

	if (strcmp(str,str2)==0) {
		printf("ˆê’v‚µ‚Ä‚¢‚Ü‚·\n");
	}
	else {
		printf("ˆá‚¢‚Ü‚·\n");
	}



	return 0;
}