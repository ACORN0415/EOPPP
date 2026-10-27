// RTPG_7046: vars=3 stmts=3
#include <stdlib.h>
void test_func(void) {
    int res6 = 22508;
    int prev43 = 3;
    int y63 = -1;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 46; i++) {
        res6 = res6 + 2;
        res6 = y63;
        res6 = res6 - 4;
        darr[i] = res6;
        if (y63 > -41) {
        prev43 = y63 + prev43;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

