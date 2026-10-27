// RTPG_7376: vars=8 stmts=3
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int v8 = 71;
    int sum17 = 67;
    int acc5 = -25;
    int lo49 = 8;
    int v74 = 7;
    int hi18 = -37;
    int tmp3 = 53;
    int tmp84 = 77;
    int *ptr = &v8;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        tmp3 = xn[i];
        hi18 = tmp3;
        lo49 = tmp3 + acc5;
        v74 = v74 - 1;
        *ptr = *ptr + 5;
        darr[i] = tmp84;
        yo[i] = lo49;
    }
    free(darr);
}
int main() { test_func(); return 0; }

