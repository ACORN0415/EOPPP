// RTPG_777: vars=5 stmts=4
#include <stdlib.h>
void test_func(void) {
    int prev35 = 35;
    int cur81 = 10;
    int v80 = 61977;
    int hi64 = 60974;
    int y51 = 62;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 17; i++) {
        cur81 = hi64 & y51;
        prev35 = v80 | cur81;
        prev35 = prev35;
        v80 = prev35 / cur81;
        darr[i] = v80;
    }
    free(darr);
}
int main() { test_func(); return 0; }

