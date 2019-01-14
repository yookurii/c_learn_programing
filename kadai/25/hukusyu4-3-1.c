#include <stdio.h>

void PrintInt(int x)
{
	printf("%d ‚Å‚·B\n", x);
}

int Kakezan(int a, int b);

int main(void)
{
	int x = 10, y = 20, z;

	z = Kakezan(x, y);


	printf("z(x‚Æy‚Ì‚¤‚¿¬‚³‚¢•û) ‚Í ");
	PrintInt(z);

	printf("x ‚Í ");
	PrintInt(x);

	return 0;
}

int Kakezan(int a, int b)
{
	int x;
	if (a < b) {
		x = a;
	}
	else if (a > b) {
		x = b;
	}
	return x;
}
