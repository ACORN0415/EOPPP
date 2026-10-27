// RTPG_8756: vars=5 stmts=5
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int a69 = -12;
    int cur42 = 31966;
    int lo89 = 20841;
    int b7 = -36;
    int x96 = 82;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        x96 = xn[i];
        a69 = a69 - 2;
        a69 = lo89 + x96;
        a69 = a69 + 4;
        a69 = cur42 - 14;
        a69 = cur42 - 74;
        darr[i] = lo89;
        if (x96 < 74) {
        cur42 = lo89;
        }
        yo[i] = lo89;
    }
    free(darr);
}
int main() { test_func(); return 0; }

