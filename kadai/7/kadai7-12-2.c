#include<stdio.h>
int main(void) {
	int n, a = 3, b = 3, c = 2, d = 1;
	int x = 0, y = 0, z = 0, w = 0;
	int max;
	do {
		printf("�P�DHUS��H(�݌ɐ��F%d)\n", a);
		printf("�Q�D���[����(�݌ɐ�:%d)\n", b);
		printf("�R�D�J�c�J���[(�݌ɐ�:%d)\n", c);
		printf("�S�D���ǂ�(�݌ɐ�:%d)\n", d);
		printf("�ԍ�����͂��Ă�������(�I��:9):");
		scanf("%d", &n);
		switch (n) {
		case 1:
			if (a > 0) {
				printf("HUS��H���o���܂���\n");
				a -= 1;
				x++;
			}
			else {
				printf("���̃��j���[�͔���؂�ł��B\n");
			}
			break;
		case 2:
			if (b > 0) {
				printf("���[�������o���܂���\n");
				b -= 1;
				y++;
			}
			else {
				printf("���̃��j���[�͔���؂�ł��B\n");
			}
			break;
		case 3:
			if (c > 0) {
				printf("�J�c�J���[���o���܂���\n");
				c -= 1;
				z++;
			}
			else {
				printf("���̃��j���[�͔���؂�ł��B\n");
			}
			break;
		case 4:
			if (d > 0) {
				printf("���ǂ���o���܂���\n");
				d -= 1;
				w++;
			}
			else {
				printf("���̃��j���[�͔���؂�ł��B\n");
			}
			break;
		case 9:
			printf("�{���̉c�Ƃ��I�����܂��B\n");
			break;
		default:
			printf("������x���͂��Ă�������\n");
		}
	} while (n != 9);
	if (x > y) {
		if (z > x) {
			if (w > z) {
				printf("�{���̐l�C�̍������j���[�́u���ǂ�v�ł����B\n");
			}
			else {
				printf("�{���̐l�C�̍������j���[�́u�J�c�J���[�v�ł����B\n");
			}
		}
		else if (w > x) {
			printf("�{���̐l�C�̍������j���[�́u���ǂ�v�ł����B\n");
		}
		else {
			printf("�{���̐l�C�̍������j���[�́uHUS��H�v�ł����B\n");
		}
	}
	else if (z > y) {
		if (w > z) {
			printf("�{���̐l�C�̍������j���[�́u���ǂ�v�ł����B\n");
		}
		else {
			printf("�{���̐l�C�̍������j���[�́u�J�c�J���[�v�ł����B\n");
		}
	}
	else if (w > y) {
		printf("�{���̐l�C�̍������j���[�́u���ǂ�v�ł����B\n");
	}
	else {
		printf("�{���̐l�C�̍������j���[�́u���[�����v�ł����B\n");
	}

}