// RTPG_4755: vars=8 stmts=5
#include <stdlib.h>
void test_func(void) {
    int res85 = 2;
    int val96 = -42;
    int cur56 = 5;
    int sum6 = 48447;
    int prev3 = 29;
    int cur99 = 1;
    int res6 = -6;
    int lo20 = 21062;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 18; i++) {
        res6 = lo20;
        val96 = val96 + 1;
        prev3 = sum6 + 62;
        lo20 = lo20 - 3;
        prev3 = cur56 - sum6;
        darr[i] = prev3;
    }
    free(darr);
}
int main() { test_func(); return 0; }

