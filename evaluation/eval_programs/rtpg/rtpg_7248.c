// RTPG_7248: vars=5 stmts=3
#include <stdlib.h>
void test_func(void) {
    int res87 = 43686;
    int y28 = 34196;
    int cnt81 = 5;
    int dat78 = 24099;
    int tmp38 = 80;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 14; i++) {
        cnt81 = cnt81 - 4;
        y28 = y28 + 6;
        cnt81 = cnt81 - 3;
        darr[i] = res87;
    }
    free(darr);
}
int main() { test_func(); return 0; }

