// RTPG_5497: vars=7 stmts=7
#include <stdlib.h>
void test_func(void) {
    int c68 = 21;
    int b61 = 22846;
    int b77 = 6;
    float res39 = 46.56;
    float hi92 = 66.20;
    float c38 = 23.46;
    int x92 = -33;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 43746;
    int sv0 = 0;
    int h1 = 25;
    int sv1 = 0;
    int h2 = 33;
    int sv2 = 0;
    int i;
    for (i = 0; i < 15; i++) {
        switch (x92) {
            case 0: res39 = 16; break;
            case 1: b61 = -16; break;
            case 2: hi92 = 7; break;
            default: break;
        }
        x92 = x92 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

