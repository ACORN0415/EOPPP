// RTPG_9243: vars=7 stmts=7
#include <stdlib.h>
void test_func(void) {
    int val0 = 2;
    int c66 = 41;
    int x13 = 46664;
    int b33 = 10884;
    int v18 = 16204;
    int tmp6 = 10;
    int val96 = 45700;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 99; i++) {
        c66 = c66 + 2;
        c66 = c66 + 5;
        val0 = val0 - 1;
        c66 = c66 - val0;
        c66 = val0 - -25;
        val0 = val96 - 51940;
        tmp6 = val0 / c66;
        darr[i] = c66;
        if (b33 > 21) {
        c66 = b33 - c66;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

