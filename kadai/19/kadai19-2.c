#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char moji[100];
	int kazu=0, alf=0,d=0,c=0;
	double m=0.0,n=1.0,x=0.0,alf2=0.0,kazu2=0.0;
	printf("����������Ă������� ");
	scanf("%s", moji);
	for (int i = 0; i <= 100; i++) {
		if (moji[i] != '\0') {
			if (isupper(moji[i]) != 0) {
				alf += moji[i];
				d = d + 1;
			}
			else if(islower(moji[i])!=0){
				alf+=moji[i];
				d = d + 1;
			}
			else if (isdigit(moji[i])!= 0) {
				kazu += moji[i];
				c = c + 1;
			}
			else {
			}
		}
		else {
			break;
		}
	}
	m = d * n;
	x = c * n;
	alf2 = alf / m;
	kazu2 = kazu / x;
	printf("�A���t�@�x�b�g�̕����R�[�h�̕��ς�%f�A�����̕��ς�%f�ł��B\n", alf2, kazu2);
	
	return 0;
}