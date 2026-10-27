// RTPG_9914: vars=5 stmts=6
#include <stdlib.h>
void test_func(void) {
    int y98 = -5;
    int lo50 = 8;
    int res25 = 83;
    int tmp3 = 2;
    int lo12 = -31;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 36; i++) {
        y98 = lo50;
        lo50 = tmp3;
        y98 = y98 - 32800;
        y98 = lo50 + res25;
        res25 = lo12 - lo12;
        tmp3 = lo12 - y98;
        darr[i] = y98;
    }
    free(darr);
}
int main() { test_func(); return 0; }

