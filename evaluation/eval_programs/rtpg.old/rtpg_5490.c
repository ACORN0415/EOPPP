// RTPG_5490: vars=8 stmts=5
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    double cnt8 = 93.10;
    int a50 = -32;
    int b63 = 25465;
    int cur3 = 64037;
    int prev47 = 25619;
    double res75 = 35.88;
    int tmp77 = -50;
    int c9 = -37;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        prev47 = xn[i];
        a50 = a50 - 1;
        res75 = a50;
        c9 = prev47;
        res75 = a50 + b63;
        cur3 = a50 - 0;
        darr[i] = b63;
        yo[i] = cur3;
    }
    free(darr);
}
int main() { test_func(); return 0; }

