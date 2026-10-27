// RTPG_3866: vars=5 stmts=4
int idx_arr[32];
#include <stdlib.h>
void test_func(void) {
    int dat58 = 6;
    int v61 = 5;
    int sum35 = 13;
    int dat40 = -30;
    int b79 = 43;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 21; i++) {
        dat40 = xn[idx_arr[i]];
        dat40 = dat40 - b79;
        dat40 = dat58;
        sum35 = sum35 + 1;
        dat40 = dat40 + sum35;
        darr[i] = sum35;
        if (dat58 <= 31) {
        dat40 = dat58 + 61191;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

