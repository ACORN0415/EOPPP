// RTPG_1813: vars=5 stmts=5
#include <stdlib.h>
void test_func(void) {
    int z20 = -30;
    float hi20 = 29.04;
    int hi63 = 6;
    int sum37 = 28;
    int tmp62 = 32;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 5; i++) {
        tmp62 = sum37 + hi20;
        sum37 = sum37 - 94;
        z20 = hi20;
        tmp62 = sum37 + 5;
        hi63 = sum37 - tmp62;
        darr[i] = z20;
        if (z20 < -46) {
        sum37 = tmp62 + z20;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

