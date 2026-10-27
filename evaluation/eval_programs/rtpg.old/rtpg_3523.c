// RTPG_3523: vars=3 stmts=7
#include <stdlib.h>
void test_func(void) {
    int hi70 = 66;
    int hi18 = 22874;
    int dat33 = 8;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 19; i++) {
        hi18 = hi70;
        dat33 = dat33 + 2;
        hi18 = dat33;
        hi70 = dat33 - hi18;
        dat33 = dat33;
        hi70 = hi18 - 14;
        hi70 = dat33 + 60551;
        darr[i] = hi70;
        if (dat33 >= 22) {
        dat33 = dat33 + hi18;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

