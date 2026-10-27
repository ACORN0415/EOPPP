// RTPG_4454: vars=10 stmts=4
#include <stdlib.h>
void test_func(void) {
    int y57 = 2515;
    int lo4 = 62551;
    int val5 = 6798;
    int out29 = 9;
    int tmp7 = 1;
    int acc39 = 0;
    int b9 = 22;
    int y60 = 9;
    int cnt39 = 14;
    int cnt45 = -36;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 84; i++) {
        out29 = out29 + 5;
        y57 = out29 - acc39;
        lo4 = cnt39 - cnt45;
        b9 = cnt45 - out29;
        darr[i] = out29;
        if (lo4 == 0) {
        out29 = b9 - -42;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

