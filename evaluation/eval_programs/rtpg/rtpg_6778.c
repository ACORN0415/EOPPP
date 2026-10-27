// RTPG_6778: vars=4 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int x35 = 92;
    int val49 = -24;
    int a4 = 91;
    int a21 = 0;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        a4 = xn[i];
        val49 = a4 + 42351;
        a21 = val49 - x35;
        x35 = x35 - 2;
        x35 = x35 + 24569;
        a4 = x35;
        darr[i] = x35;
        if (val49 >= 72) {
        a4 = a4 + a21;
        }
        yo[i] = val49;
    }
    free(darr);
}
int main() { test_func(); return 0; }

