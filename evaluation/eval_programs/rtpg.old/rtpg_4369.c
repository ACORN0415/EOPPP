// RTPG_4369: vars=4 stmts=4
#include <stdlib.h>
void test_func(void) {
    int hi90 = 7;
    int hi40 = 63983;
    int cnt99 = 9;
    int lo47 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 63; i++) {
        hi90 = hi90 - cnt99;
        lo47 = lo47 - 4;
        lo47 = lo47;
        lo47 = lo47;
        darr[i] = cnt99;
        if (cnt99 > 84) {
        cnt99 = lo47;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

