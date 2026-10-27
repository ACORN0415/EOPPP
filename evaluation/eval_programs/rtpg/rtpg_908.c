// RTPG_908: vars=7 stmts=8
#include <stdlib.h>
void test_func(void) {
    int acc38 = 5;
    int dat38 = 48902;
    int hi76 = 43512;
    int a5 = 39;
    int res0 = 52707;
    int a35 = 58450;
    int val24 = 24848;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 26; i++) {
        hi76 = res0 - 2735;
        a5 = res0 + val24;
        val24 = val24 + 5;
        res0 = hi76;
        acc38 = hi76;
        dat38 = a35 + hi76;
        acc38 = a5 - a35;
        res0 = hi76 + 53;
        darr[i] = a35;
        if (a35 == -21) {
        dat38 = res0 - a5;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

