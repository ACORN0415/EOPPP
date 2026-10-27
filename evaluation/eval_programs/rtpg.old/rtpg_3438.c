// RTPG_3438: vars=4 stmts=12
#include <stdlib.h>
void test_func(void) {
    double tmp63 = 94.15;
    int sum83 = -40;
    int cnt81 = 20556;
    int hi29 = -6;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 12; i++) {
        sum83 = hi29;
        sum83 = sum83 + cnt81;
        sum83 = tmp63 - 99;
        sum83 = tmp63;
        hi29 = cnt81 + 2;
        tmp63 = sum83;
        cnt81 = tmp63;
        sum83 = cnt81;
        cnt81 = sum83 - cnt81;
        hi29 = sum83 - hi29;
        hi29 = hi29 - 5;
        tmp63 = sum83 - 38;
        darr[i] = cnt81;
    }
    free(darr);
}
int main() { test_func(); return 0; }

