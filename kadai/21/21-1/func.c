/* ���̃\�[�X�t�@�C���ɁA�֐��̖{�̂������܂��B */

/* �֐��ŕK�v�ȃw�b�_�t�@�C�����C���N���[�h���܂��B */
#include <stdio.h>

/* �֐��̃v���g�^�C�v�錾�������ꂽ�w�b�_�t�@�C�����C���N���[�h���܂��B */
#include "func.h"

/*
* int�^�̕ϐ�a�������Ƃ��āAa�̊K����v�Z����
*
* @param�@a		�K����v�Z���邽�߂̒l
* @return a		a�̊K��
*/
int fact(int a) {
	int i, r = 1;

	/* a��0�ȉ��̂Ƃ��́A�Ƃ肠����1��Ԃ����ƂƂ��� */
	if (a <= 0) {
		return 1;
	}

	/* r��2,3,4,...,a�������Ă��� */
	for (i = 2; i <= a; i++) {
		r *= i;
	}
	
	return r;
}