// RTPG_3535: vars=3 stmts=7
#include <stdlib.h>
void test_func(void) {
    int hi70 = 66;
    int dat33 = 22874;
    int hi18 = 8;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 19; i++) {
        dat33 = hi70;
        hi18 = hi18 + 2;
        dat33 = hi18;
        hi70 = hi18 - dat33;
        hi18 = hi18;
        hi70 = dat33 - 14;
        hi70 = hi18 + 60551;
        darr[i] = hi70;
        if (hi18 >= 22) {
        hi18 = hi18 + dat33;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

