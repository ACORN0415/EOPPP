// RTPG_8623: vars=8 stmts=3
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int sum44 = 19320;
    float res83 = 16.99;
    int v99 = 46563;
    int v60 = 7;
    int sum35 = 92;
    int res64 = 1;
    int tmp47 = 84;
    int x9 = 82;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        res64 = xn[i];
        sum44 = sum44 - 4;
        v99 = v99 - 4;
        res64 = tmp47;
        darr[i] = res64;
        if (tmp47 == -21) {
        res83 = sum44 + 33;
        }
        yo[i] = x9;
    }
    free(darr);
}
int main() { test_func(); return 0; }

