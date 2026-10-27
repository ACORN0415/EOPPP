// RTPG_6904: vars=12 stmts=3
#include <stdlib.h>
void test_func(void) {
    int lo4 = 5;
    int val26 = 9;
    int tmp94 = 1;
    int prev58 = 27666;
    int hi47 = 17;
    int c73 = 58693;
    int cnt58 = -24;
    int acc46 = 10112;
    int dat44 = -31;
    int tmp56 = 29400;
    int b45 = 2;
    int prev92 = 2;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 58; i++) {
        dat44 = dat44 + 4;
        acc46 = acc46 - 2;
        hi47 = acc46 - cnt58;
        darr[i] = hi47;
    }
    free(darr);
}
int main() { test_func(); return 0; }

