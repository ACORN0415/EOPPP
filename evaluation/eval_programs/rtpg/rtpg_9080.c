// RTPG_9080: vars=5 stmts=7
#include <stdlib.h>
void test_func(void) {
    int tmp36 = 0;
    int c69 = 3;
    int val58 = 31;
    int res36 = 33155;
    int x4 = 22403;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 12; i++) {
        res36 = x4;
        res36 = res36 + 5;
        c69 = tmp36 - tmp36;
        tmp36 = c69;
        val58 = tmp36;
        c69 = c69;
        res36 = res36 + 2;
        darr[i] = val58;
        if (res36 != -9) {
        c69 = tmp36 - c69;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

