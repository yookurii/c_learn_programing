#include <stdio.h>
int main(void) {
	int x[11] = { 9,8,7,6,5,4,3,2,1,0,-1 },n;
	double y[] = { 0.1,0.2,0.3,0.5,0.8,1.3 },m;

	n = x[10];
	m = y[5];

	printf("%d\n", n);
	printf("%f\n", m);
	return 0;
}