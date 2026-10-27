// RTPG_6332: vars=8 stmts=9
#include <stdlib.h>
void test_func(void) {
    int v25 = 34954;
    int out25 = 39;
    int lo1 = 29;
    int v54 = 16371;
    int cnt57 = 36092;
    int sum33 = 19;
    int res69 = 9;
    int y38 = 57969;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 27; i++) {
        v54 = res69 - lo1;
        cnt57 = cnt57 + 2;
        res69 = res69 - 1;
        v25 = v25 + 4;
        lo1 = v54 + 6;
        res69 = y38;
        y38 = res69 + -22;
        out25 = v25 - res69;
        cnt57 = cnt57 ^ v54;
        darr[i] = v54;
        if (cnt57 >= 81) {
        cnt57 = cnt57 + 5;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

