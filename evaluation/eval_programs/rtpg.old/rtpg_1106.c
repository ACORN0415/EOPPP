// RTPG_1106: vars=6 stmts=4
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    double cnt24 = 47.71;
    int c3 = 59018;
    int tmp33 = 6570;
    int prev49 = 983;
    int sum51 = 4;
    int c88 = 39;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 10;
    int sv0 = 0;
    int h1 = 34;
    int sv1 = 0;
    int h2 = 71;
    int sv2 = 0;
    int i;
    for (i = 0; i < 46; i++) {
        c3 = xn[idx_arr[i]];
        sum51 = tmp33 + c3;
        cnt24 = cnt24 + 4;
        tmp33 = tmp33 + prev49;
        sum51 = sum51 + 10;
        darr[i] = cnt24;
        if (c88 > -25) {
        sum51 = sum51 + 4;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

