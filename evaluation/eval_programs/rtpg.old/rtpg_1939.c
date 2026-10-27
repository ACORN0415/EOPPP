// RTPG_1939: vars=4 stmts=2
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int val43 = 1;
    int hi78 = 51553;
    int a38 = -20;
    int cur58 = 5;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        cur58 = xn[i];
        cur58 = cur58;
        a38 = val43;
        darr[i] = cur58;
        if (hi78 > 22) {
        a38 = a38 - 3;
        }
        yo[i] = val43;
    }
    free(darr);
}
int main() { test_func(); return 0; }

