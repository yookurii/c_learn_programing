#include <stdio.h>
int main(void) {
	char s1[8] = "\"Tax\"8%", s2[7] = "\\15,000", s3[7] = "\'?\'=63";
	printf("%s\n", &s1);
	printf("%s\n", &s2);
	printf("%s\n",&s3);
	return 0;
}