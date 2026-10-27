// RTPG_472: vars=7 stmts=2
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int out0 = 50;
    int res90 = 31959;
    int hi33 = 18650;
    int acc83 = 30;
    int hi46 = 4;
    int dat66 = 5;
    int x65 = 25;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        out0 = xn[i];
        x65 = dat66;
        hi33 = dat66 + hi46;
        darr[i] = x65;
        if (hi33 <= 52) {
        acc83 = acc83 + 0;
        }
        yo[i] = acc83;
    }
    free(darr);
}
int main() { test_func(); return 0; }

