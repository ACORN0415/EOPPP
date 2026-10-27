// RTPG_7656: vars=7 stmts=2
#include <stdlib.h>
void test_func(void) {
    int out24 = 38;
    int b15 = 31970;
    int tmp17 = 25315;
    int x10 = 4;
    int prev57 = 7;
    int tmp72 = 3;
    int z27 = -6;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 37; i++) {
        tmp72 = tmp72 - prev57;
        prev57 = b15 - 99;
        darr[i] = tmp17;
    }
    free(darr);
}
int main() { test_func(); return 0; }

