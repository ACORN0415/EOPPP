// RTPG_3984: vars=4 stmts=3
#include <stdlib.h>
void test_func(void) {
    int out98 = 24;
    int res22 = 8;
    int hi58 = 34;
    int a49 = 23694;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 88; i++) {
        hi58 = res22 - res22;
        hi58 = hi58 - 1;
        res22 = res22 - a49;
        darr[i] = a49;
    }
    free(darr);
}
int main() { test_func(); return 0; }

