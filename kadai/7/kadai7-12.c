#include <stdio.h>
int main(void) {
	int hus = 3, udon = 2, curry = 2, ramen = 3, i;
	do {
		printf("1. HUS��H(�݌ɐ��F%d�j\n", hus);
		printf("2. �����g�����ǂ�(�݌ɐ��F%d�j\n", udon);
		printf("3. �J�c�J���[(�݌ɐ��F%d�j\n", curry);
		printf("4. ���[����(�݌ɐ��F%d�j\n", ramen);
		printf("�ԍ�����͂��Ă��������i�I���F9�j�F�@");
		scanf("%d", &i);
		switch (i) {
		case 1:
			if (hus >= 1) {
				printf("HUS��H���o���܂���\n\n");
				hus = hus - 1;
				break;
			}
			else if (hus == 0) {
				printf("���̃��j���[�͔���؂�ł��B\n\n");
				break;
			}
		case 2:
			if (udon >= 1) {
				printf("�����g�����ǂ���o���܂���\n\n");
				udon = udon - 1;
				break;
			}
			else if (udon == 0) {
				printf("���̃��j���[�͔���؂�ł��B\n\n");
				break;
			}
		case 3:
			if (curry >= 1) {
				printf("�J�c�J���[���o���܂���\n\n");
				curry = curry - 1;
				break;
			}
			else if (curry == 0) {
				printf("���̃��j���[�͔���؂�ł��B\n\n");
				break;
			}
		case 4:
			if (ramen >= 1) {
				printf("���[�������o���܂���\n\n");
				ramen = ramen - 1;
				break;
			}
			else if (ramen == 0) {
				printf("���̃��j���[�͔���؂�ł��B\n\n");
				break;
			}
		case 9:
			printf("�{���̉c�Ƃ��I�����܂��B\n");
			
			break;
		default:
			printf("�������l����͂��Ă��������B\n\n");
			break;
		}
	} while (i != 9);

	if (hus < udon) {
		if (hus < curry) {
			if (hus < ramen) {
				printf("�{���̐l�C�̍������j���[�́uHUS��H�v�ł��B\n");
			}
			else {
				printf("�{���̐l�C�̍������j���[�́u���[�����v�ł��B\n");
			}
		}
		else {
			printf("�{���̐l�C�̍������j���[�́u�J���[�ł��v\n");
		}
	}
	else {
		if (udon < curry) {
			if (udon < ramen) {
				printf("�{���̐l�C�̍������j���[�́u���ǂ�v�ł��B\n");
			}
			else {
				printf("�{���̐l�C�̍������j���[�́u���[�����v�ł��B\n");
			}
		}
		else {
			printf("�{���̐l�C�̍������j���[�́u�J�c�J���[�v�ł��B\n");
		}
	}
	return 0;

}

	