// RTPG_5577: vars=8 stmts=5
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    double res75 = 93.10;
    int cur3 = -32;
    int prev47 = 25465;
    int b63 = 64037;
    int tmp77 = 25619;
    double cnt8 = 35.88;
    int a50 = -50;
    int c9 = -37;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        tmp77 = xn[i];
        cur3 = cur3 - 1;
        cnt8 = cur3;
        c9 = tmp77;
        cnt8 = cur3 + prev47;
        b63 = cur3 - 0;
        darr[i] = prev47;
        yo[i] = b63;
    }
    free(darr);
}
int main() { test_func(); return 0; }

