// RTPG_9518: vars=9 stmts=7
#include <stdlib.h>
void test_func(void) {
    int acc7 = -5;
    int cur77 = 30;
    int x64 = 7;
    int y40 = 3;
    int acc2 = -27;
    double sum32 = 94.38;
    double hi98 = 16.42;
    double hi44 = 86.87;
    int hi89 = 45670;
    int *ptr = &sum32;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        x64 = hi89 - 41224;
        cur77 = hi89 + acc7;
        sum32 = hi98 + sum32;
        acc2 = y40 + sum32;
        hi89 = acc2 - x64;
        hi89 = hi89 + 3;
        acc7 = acc7 + 4;
        *ptr = *ptr + 3;
        darr[i] = hi44;
    }
    free(darr);
}
int main() { test_func(); return 0; }

