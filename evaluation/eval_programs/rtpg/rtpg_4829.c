// RTPG_4829: vars=4 stmts=2
#include <stdlib.h>
void test_func(void) {
    int lo40 = -35;
    int out34 = 7;
    int z96 = 24;
    int val59 = 33;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 31; i++) {
        lo40 = lo40 - 4;
        z96 = lo40 - lo40;
        darr[i] = lo40;
        if (val59 > 18) {
        val59 = val59;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

