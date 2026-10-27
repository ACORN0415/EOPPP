// RTPG_8047: vars=8 stmts=6
int xn[64];
int yo[64];
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int cur40 = 54;
    int x76 = 32956;
    int a37 = 29;
    int c4 = 99;
    int lo93 = 24;
    int prev62 = 34;
    int res74 = 5;
    int tmp7 = 1843;
    int *ptr = &cur40;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        prev62 = xn[i];
        tmp7 = xn[idx_arr[i]];
        x76 = res74 + prev62;
        x76 = a37;
        lo93 = res74 + cur40;
        lo93 = c4 + prev62;
        prev62 = a37 + tmp7;
        tmp7 = tmp7 - 5;
        *ptr = *ptr + 1;
        darr[i] = c4;
        if (res74 == 77) {
        prev62 = prev62 + lo93;
        }
        yo[i] = cur40;
    }
    free(darr);
}
int main() { test_func(); return 0; }

