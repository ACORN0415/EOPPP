// RTPG_4404: vars=3 stmts=2
#include <stdlib.h>
void test_func(void) {
    int res99 = 23;
    int out17 = 46;
    int res52 = 64;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 57; i++) {
        res52 = res52 + 2;
        out17 = res52;
        darr[i] = out17;
    }
    free(darr);
}
int main() { test_func(); return 0; }

