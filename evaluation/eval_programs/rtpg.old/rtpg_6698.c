// RTPG_6698: vars=4 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int x35 = 92;
    int a4 = -24;
    int val49 = 91;
    int a21 = 0;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        val49 = xn[i];
        a4 = val49 + 42351;
        a21 = a4 - x35;
        x35 = x35 - 2;
        x35 = x35 + 24569;
        val49 = x35;
        darr[i] = x35;
        if (a4 >= 72) {
        val49 = val49 + a21;
        }
        yo[i] = a4;
    }
    free(darr);
}
int main() { test_func(); return 0; }

