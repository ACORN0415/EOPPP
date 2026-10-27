// RTPG_2627: vars=9 stmts=5
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int out8 = 9;
    int prev19 = 1;
    int v96 = -27;
    int lo49 = 60826;
    int tmp37 = 19;
    int sum35 = 2;
    int out44 = 17;
    int a40 = 9;
    int x5 = 2;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 49; i++) {
        x5 = xn[idx_arr[i]];
        prev19 = sum35;
        prev19 = prev19 - 11;
        out44 = out8 + out44;
        lo49 = out44 + -41;
        x5 = sum35 - out44;
        darr[i] = sum35;
        if (sum35 != 5) {
        out8 = sum35 - 43;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

