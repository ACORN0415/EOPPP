// RTPG_8908: vars=5 stmts=7
#include <stdlib.h>
void test_func(void) {
    int res36 = 0;
    int tmp36 = 3;
    int c69 = 31;
    int x4 = 33155;
    int val58 = 22403;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 12; i++) {
        x4 = val58;
        x4 = x4 + 5;
        tmp36 = res36 - res36;
        res36 = tmp36;
        c69 = res36;
        tmp36 = tmp36;
        x4 = x4 + 2;
        darr[i] = c69;
        if (x4 != -9) {
        tmp36 = res36 - tmp36;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

