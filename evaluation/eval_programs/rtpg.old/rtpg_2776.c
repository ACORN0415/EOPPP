// RTPG_2776: vars=5 stmts=4
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int res67 = 34;
    int cur83 = 95;
    int out36 = 56158;
    int acc48 = 12;
    int cur23 = 5;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 13; i++) {
        cur83 = xn[idx_arr[i]];
        res67 = out36 - cur23;
        res67 = res67 - 9050;
        out36 = acc48;
        out36 = out36 - 3;
        darr[i] = acc48;
    }
    free(darr);
}
int main() { test_func(); return 0; }

