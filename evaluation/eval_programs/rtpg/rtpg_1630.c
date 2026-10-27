// RTPG_1630: vars=4 stmts=5
#include <stdlib.h>
void test_func(void) {
    int cnt36 = -43;
    int c17 = 14;
    int z10 = 19392;
    int val36 = 10;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 290;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 93; i++) {
        c17 = val36;
        val36 = z10 * 52877;
        cnt36 = c17 + c17;
        c17 = c17 - 2;
        cnt36 = val36 - cnt36;
        darr[i] = cnt36;
        if (z10 > 5) {
        c17 = c17 - val36;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

