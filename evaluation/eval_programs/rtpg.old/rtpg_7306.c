// RTPG_7306: vars=13 stmts=12
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int a49 = 13;
    double z67 = 85.67;
    int v34 = -14;
    int tmp85 = 42;
    int out67 = 38;
    int a48 = 28203;
    int b92 = 35094;
    int sum9 = -30;
    double cur57 = 72.85;
    double out59 = 62.31;
    int tmp67 = 55;
    int tmp80 = 76;
    int b13 = 2;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        out67 = xn[i];
        z67 = z67 - 0;
        a48 = out59 + tmp67;
        sum9 = z67;
        v34 = v34 - 5;
        z67 = v34 - 35;
        cur57 = cur57 + 4;
        sum9 = v34 + b13;
        v34 = v34 - 2;
        a49 = b92 + tmp85;
        b92 = b92 - 2;
        cur57 = out59 - v34;
        v34 = z67;
        darr[i] = z67;
        yo[i] = a49;
    }
done:
    a48 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

