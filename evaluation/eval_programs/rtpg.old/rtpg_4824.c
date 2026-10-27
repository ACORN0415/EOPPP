// RTPG_4824: vars=9 stmts=8
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int x13 = -40;
    int x26 = 65;
    int x12 = 7;
    int y8 = 45;
    int val65 = 27;
    int out21 = 10;
    int tmp44 = -49;
    int out31 = 9;
    int c49 = 59;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        c49 = xn[i];
        x12 = out31 + x12;
        y8 = val65 - x13;
        x13 = y8 + out21;
        x26 = y8 - x26;
        val65 = c49 + tmp44;
        c49 = x26 + y8;
        out21 = x12 - y8;
        tmp44 = tmp44 + 4;
        darr[i] = y8;
        if (x13 > -30) {
        x13 = x13 + 5;
        }
        yo[i] = x26;
    }
    free(darr);
}
int main() { test_func(); return 0; }

