#include <stdio.h>

/*
* �{�̂� func.c �̒��ɏ�����Ă���֐� fact �́Amain.c ����͌����܂���B
* ���̂��߁A�v���g�^�C�v�錾�������ꂽ func.h ���C���N���[�h���āA
* �֐��̈����Ɩ߂�l�̌^��m��K�v������܂��B
*/
#include "func.h"

int main(void)
{
	/* ��������v���O�������X�^�[�g���܂��B */

	/* �L�[�{�[�h���琮����ǂݍ��݁A���̊K���\�����܂��B */
	int a;

	printf("0 �ȏ�̐�������͂��Ă������� > ");
	scanf("%d", &a);

	printf("%d �̊K��� %d �ł��B\n", a, fact(a));

	return 0;
}
