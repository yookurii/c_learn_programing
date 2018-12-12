#include <stdio.h>

/*
* 本体が func.c の中に書かれている関数 fact は、main.c からは見えません。
* そのため、プロトタイプ宣言が書かれた func.h をインクルードして、
* 関数の引数と戻り値の型を知る必要があります。
*/
#include "func.h"

int main(void)
{
	/* ここからプログラムがスタートします。 */

	/* キーボードから整数を読み込み、その階乗を表示します。 */
	int a;

	printf("0 以上の整数を入力してください > ");
	scanf("%d", &a);

	printf("%d の階乗は %d です。\n", a, fact(a));

	return 0;
}
