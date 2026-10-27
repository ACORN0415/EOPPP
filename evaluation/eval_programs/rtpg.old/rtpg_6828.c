// RTPG_6828: vars=12 stmts=3
#include <stdlib.h>
void test_func(void) {
    int b45 = 5;
    int c73 = 9;
    int lo4 = 1;
    int tmp94 = 27666;
    int prev58 = 17;
    int prev92 = 58693;
    int hi47 = -24;
    int cnt58 = 10112;
    int val26 = -31;
    int acc46 = 29400;
    int tmp56 = 2;
    int dat44 = 2;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 58; i++) {
        val26 = val26 + 4;
        cnt58 = cnt58 - 2;
        prev58 = cnt58 - hi47;
        darr[i] = prev58;
    }
    free(darr);
}
int main() { test_func(); return 0; }

