/* このソースファイルに、関数の本体を書きます。 */

/* 関数で必要なヘッダファイルをインクルードします。 */
#include <stdio.h>
#include "func.h"

int func03(int a) {
	int x=0;
	for (int i = 1; i <= 1000; i++) {
		x += i;
	}

	return x;
}