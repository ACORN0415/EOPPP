// RTPG_7147: vars=10 stmts=6
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int tmp52 = 45022;
    int sum10 = 3546;
    int y25 = 43;
    int res17 = 766;
    int y44 = -15;
    int cnt82 = 9;
    int dat65 = 32;
    int out10 = 2;
    int dat55 = 6;
    int z93 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        res17 = xn[i];
        dat65 = dat65 + 1;
        dat55 = dat55 - 2;
        y44 = dat55 - z93;
        cnt82 = tmp52 + -9;
        sum10 = sum10 - 1;
        res17 = res17 - sum10;
        darr[i] = tmp52;
        if (tmp52 > 3) goto done;
        if (out10 == -42) {
        tmp52 = out10 + -2;
        }
        yo[i] = cnt82;
    }
done:
    res17 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

