// RTPG_5982: vars=7 stmts=3
#include <stdlib.h>
void test_func(void) {
    int sum95 = 8;
    int c11 = 31;
    int prev19 = 3796;
    int b74 = 17096;
    int tmp37 = 100;
    int out31 = -24;
    int z86 = 0;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 9; i++) {
        tmp37 = prev19;
        out31 = out31 + 2;
        z86 = out31;
        darr[i] = b74;
        if (sum95 < -4) {
        tmp37 = sum95 - c11;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

