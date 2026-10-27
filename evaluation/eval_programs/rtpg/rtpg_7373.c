// RTPG_7373: vars=13 stmts=12
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int b13 = 13;
    double out67 = 85.67;
    int b92 = -14;
    int cur57 = 42;
    int z67 = 38;
    int a48 = 28203;
    int tmp67 = 35094;
    int a49 = -30;
    double tmp85 = 72.85;
    double v34 = 62.31;
    int tmp80 = 55;
    int out59 = 76;
    int sum9 = 2;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        z67 = xn[i];
        out67 = out67 - 0;
        a48 = v34 + tmp80;
        a49 = out67;
        b92 = b92 - 5;
        out67 = b92 - 35;
        tmp85 = tmp85 + 4;
        a49 = b92 + sum9;
        b92 = b92 - 2;
        b13 = tmp67 + cur57;
        tmp67 = tmp67 - 2;
        tmp85 = v34 - b92;
        b92 = out67;
        darr[i] = out67;
        yo[i] = b13;
    }
    free(darr);
}
int main() { test_func(); return 0; }

